/*
 *	copyright (c) 2014.xx company
 *	All rights reserved
 *
 *	�ļ����ƣ�
 *	�ļ���ʶ��
 *	�ļ�ժҪ��
 *
 *	��ǰ�汾��
 *	������ڣ�
 *
 */

#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

class student
{
	public:
		initialise();
		static save();
		input();
		fstream f;

	private:
		int Number;
		char Classes[20],Name[20];
		float ElectronScore,CppScore,MediaScore,MathScore,PeScore,EnglishScore,PoliticsScore,AverageScore;

};


/*
class teacher
{
	private:
		long int number;
		string name;
		string sex;
		int year;
public:
		teacher(){
			cout<<"���캯��"<<endl;
 
		}
		teacher(teacher&tea);
		teacher(int tyear,string tsex,string name);
		virtual ~teacher(){
			cout<<"��������";
}
/**
Description: ����ֵ
Arguments:string tname,long int tnumber,string tsex,int tyear
Returns:
*//*
void input(string tname,long int tnumber,string tsex,int tyear)
{
name = tname;
year = tyear;
number = tnumber;
sex = tsex;
}
/**
Description: �ı����
Arguments:
Returns:
*//*
void ChangeYear(int tyear)
{
year = tyear;
 
}
void ChangeName(string tname)
{
name = tname;
}
void ChangeNumber(long int tnumber)
{
number = tnumber;
}
void ChangeSex(string tsex)
{
sex = tsex;
}
void CoutData()
{
cout<<"����Ϊ��"<<name<<endl<<"����Ϊ��"<<number<<endl<<"�Ա�Ϊ��"<<sex<<endl<<"�������Ϊ��"<<year;
}
};
teacher::teacher(teacher&tea)
{
std::cout<<"�������캯������"<<std::endl;
}
teacher::teacher(int tyear,string tsex,string name)
{
cout<<"���ι��캯��"<<endl;
}*/
int main()
{
	int sNumber;
	char sClasses[20],sName[20];
	float sElectronScore,sCppScore,sMediaScore,sMathScore,sPeScore,sEnglishScore,sPoliticsScore,sAverageScore;

	//��ʼ���ļ�����
	fstream f("d.txt",ios::out);
	student stu[56];
	

	while(1) 
	{
		int i;

		cout<<"***********************************************************************"<<endl;
		cout<<endl;
		cout<<"---------------------<<��ӭ��ʹ��ѧ���ɼ�����ϵͳ>>--------------------"<<endl;
		cout<<endl;
		cout<<"***********************************************************************"<<endl;
		cout<<endl;
		cout<<"  *			��1������ѧ���ɼ�                     *"<<endl;
		cout<<"  *			��2����ʾͳ������                     *"<<endl;
		cout<<"  *			��3������ѧ���ɼ�                     *"<<endl;
		cout<<"  *			��4���޸�ѧ���ɼ�                     *"<<endl;
		cout<<"  *			��5��ɾ��ѧ���ɼ�                     *"<<endl;
		cout<<"  *			��6������ѧ���ɼ�                     *"<<endl;
		cout<<"  *			��7����ƽ���ֽ�������                 *"<<endl;
		cout<<"  *			��8����ʾȫ��ѧ���ɼ�                 *"<<endl;
		cout<<"  *			��0���˳���ϵͳ                       *"<<endl;
		cout<<endl;
		cout<<"***********************************************************************"<<endl;
		cout<<"������Ҫִ�е����ݵı��:";
		
		cin>>i;
			
		switch(i)
		{
			//����ѧ���ɼ�
			case 1:
				while(1)
				{
				system("cls");
				cout<<"-------------->> ������ѧ���ɼ� <<---------------"<<endl;
				cout<<"������༶��";
				cin>>sClasses;

				cout<<"������ѧ�ţ�";
				cin>>sNumber;

				cout<<"������������";
				cin>>sName;

				cout<<"��������Ӽ����ɼ���";
				cin>>sElectronScore;

				cout<<"������c++������Ƽ����ɼ���";
				cin>>sCppScore;

				cout<<"�������ý�弼���ɼ���";
				cin>>sMediaScore;

				cout<<"�������ѧӢ��ɼ���";
				cin>>sEnglishScore;

				cout<<"������ߵ���ѧ�ɼ���";
				cin>>sMathScore;

				cout<<"�������ѧ�����ɼ���";
				cin>>sPeScore;

				cout<<"���������˼�������ξ���ѧ�ɼ���";
				cin>>sPoliticsScore;

				cout<<"ƽ����Ϊ:";
				sAverageScore = (sElectronScore+sCppScore+sMediaScore+sMathScore+sPeScore+sEnglishScore+sPoliticsScore)/6.0;
				cout<<sAverageScore;

				//���浽�ļ�
				f<<sNumber<<' '<<sClasses<<' '<<sName<<' '<<sElectronScore<<' '<<sCppScore<<' '<<sMediaScore<<' '<<sMathScore<<' '<<sPeScore<<' '<<sEnglishScore<<' '<<sPoliticsScore<<' '<<sAverageScore;

				cout<<"---->>��ʾ���Ƿ����д��ѧ���ɼ�����y/n)";
				char r;
				cin>>r;

				if(r == 'y')
				{	
					//����д��ɼ�

				}
				else
				{
					break;
				}
				}

			//��ʾͳ������
			case 2:
				system("cls");
				cout<<"���Ӽ���ƽ���֣�";
				cout<<"���Ӽ���ƽ���֣�";

				
				break;

			//����ѧ���ɼ�
			case 3:
				system("cls");
				cout<<"������Ҫ���ҵ�ѧ�ţ�";
				
				break;

			//�޸�ѧ���ɼ�
			case 4:
				system("cls");
				cout<<"������Ҫ�޸ĳɼ���ѧ�ţ�";
			
				break;

			//ɾ��ѧ���ɼ�
			case 5:
				system("cls");

				break;
			
			//����ѧ���ɼ�
			case 6:
				system("cls");
				cout<<"�������µĳ�����ݣ�";
			
				break;
			
			//��ƽ���ֽ�������
			case 7:
			
				system("pause");
				exit(0);
				break;

			//��ʾȫ��ѧ���ɼ�
			case 8:
				system("cls");
				if(!f)
				{
					cout<<"File open error!";
					
				}
				char c[80];

				while(f.get(c,80,'\0')!=NULL)cout<<c; 

				//cout<<c;
				f.close;
				system("pause");
				break;

			//�˳���ϵͳ
			case 0:
				exit(0);

			default:
				cout<<"�����������������";
				system("pause");
				break;
			}
			system("cls");
		}

	return 0;
}