#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string multiply(string num1, string num2) {
		//反转num1 和 num2
		reverse(num1.begin(), num1.end());
		reverse(num2.begin(), num2.end());
		string res = "";
		for (int i = 0; i < num2.size(); i++)
		{
			string rl = "0";
			for (int j = 0; j < num1.size(); j++)
			{
				cout << num1[j] << "*" << num2[i] << endl;
				string xy = to_string((num1[j] - '0') * (num2[i] - '0'));
				for (int k = 0; k < j; k++)
					xy += '0';
				for (int k = xy.size() - rl.size(); k > 0; k--)
					rl = '0' + rl;
				//两数相加 xy 和 rl
				char flag = '0';
				for (int k = rl.size() - 1; k >= 0; k--)
				{
					int x = (rl[k] + xy[k] + flag - 3 * '0');
					if (x > 9)
						flag = x / 10 + '0';
					else
						flag = '0';
					rl[k] = x % 10 + '0';
				}
				if (flag != '0')
					rl = flag + rl;
			}
			//rl 是当前计算完的 res是之前计算完的
			for (int j = 0; j < i; j++)
			{
				rl += '0';
			}
			for (int j = rl.size() - res.size(); j > 0; j--)
			{
				res = '0' + res;
			}
			//对rl 和res相加
			char flag = '0'; 
			for (int k = rl.size() - 1; k >= 0; k--)
			{
				int x = (rl[k] + res[k] + flag - 3 * '0');
				res[k] = x % 10 + '0';
				if (x > 9)
					flag = x /10 + '0';
				else
					flag = '0';
			}
			if (flag != '0')
				res = flag + res;
		}
		while (res.size() != 0 && res[0] == '0')
			res = res.substr(1, res.size() - 1);
		if (res == "")
			res = "0";
		return res;
    }
};
int main()
{
	while (1)
	{
		string num1 = "123456789";
		string num2 = "9";
		cin >> num1;
		cin >> num2;
		Solution S;
		cout << num1 << "*" << num2;
		cout << S.multiply(num1, num2) << endl;;
	}
}