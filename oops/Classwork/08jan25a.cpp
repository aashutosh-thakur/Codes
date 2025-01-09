#include<iostream>
using namespace std;
int main()
{
	char a[20];
	char b[20];
	int i,j;
	cout<<"Enter the first word: ";
	cin>>a;
	cout<<"Enter the second word: ";
	cin>>b;
	int choice,length1,length2;
	for(i=0;a[i]!='\0';i++);
	length1=i;
	for(j=0;b[j]!='\0';j++);
	length2=j;
	
	//length1=a.length();
	//length2=b.length();
	cout<<"1.Compare\n2.Copy A to B\n3.Reverse\nEnter your choice: ";
	cin>>choice;
	switch (choice)
		{
			case 1:
			if(length1==length2)
			{
				int i;
				for(i=1;i<length1;i++)
				{
					if(a[i]==b[i])
					{
						int count;
						count++;
						if(count==length1)
						{
						cout<<"Both A and B is same";
					}
					else
					{
					    if(i==length1-1){
						cout<<"Invalid";
					    }
					}
				}
			}
			// else if (length1>length2)
			// {
			//     cout<<"Length of A is greater than B";
			// }
			// else{
			//     cout<<"Length of B is greater than A";
			// }
			break;
			case 2:
			int k;
// 			cout<<length1;
// 			cout<<"1 string"<<a;
// 			cout<<"\n 2 string"<<b<<"\n";
			for(k=0;k<length1;k++)
			{
				b[k]=a[k];
			}b[k]='\0';
			
			cout<<b;
			break;
			case 3:
			int l,j;
			for(l=length1;l>=0;l--)
			{
				cout<<a[l];
			}
			cout<<"\n";
			for(j=length2;j>=0;j--)
			{
				cout<<b[j];

			}
			break;
// 			default{
// 				cout<<"Invalid Choice";
// 				}
		}
}