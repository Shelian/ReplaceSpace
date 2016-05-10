#include <iostream>
using namespace std;

//size为数组的容量
void ReplaceSpace(char str[],int size)
{
	int i = 0;
	int OrigenalLength = strlen(str);
	int BlankNumber = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			++BlankNumber;
		}

		++i;
	}

	//在原数组上修改，新的长度等于原来长度加上空格数乘以2
	int newLength = OrigenalLength + 2 * BlankNumber;

	if (newLength >= size)//等号必须加上，当新的字符长度等于容量时，‘\0’无法拷贝进去，会发生错误
		return;
	
	while (OrigenalLength >= 0 && newLength > OrigenalLength)
	{
		if (str[OrigenalLength] == '\0')
		{
			str[newLength--] = '0';
			str[newLength--] = '2';
			str[newLength--] = '%';
		}
		else
		{
			str[newLength--] = str[OrigenalLength];
		}

		--OrigenalLength;
	}
}