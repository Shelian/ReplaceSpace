#include <iostream>
using namespace std;

//sizeΪ���������
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

	//��ԭ�������޸ģ��µĳ��ȵ���ԭ�����ȼ��Ͽո�������2
	int newLength = OrigenalLength + 2 * BlankNumber;

	if (newLength >= size)//�Ⱥű�����ϣ����µ��ַ����ȵ�������ʱ����\0���޷�������ȥ���ᷢ������
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