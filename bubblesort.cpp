#include"iostream"
using namespace std;

void bubble_sort(int list[])
{
	int i,j,temp;
	for(i=0;i<6;i++)
	{
		for(j=0;j<5;j++)
		{
			if(list[j]>list[j+1]){
				temp=list[j];
				list[j]=list[j+1];
				list[j+1]=temp;
			}
		}
	}
}
int main(){
	int list[]={10,20,5,25,9,17};
		bubble_sort(list);
		for(int i=0;i<6;i++)
		{
			cout<<" "<<list[i];
		}
	return 0;
}
