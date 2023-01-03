#include<iostream>
using namespace std;

int main(){
	int a=0,b=0,c=0,d=0,f=0;
	int count[5] = {a,b,c,d,f}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int x=1;
	int total=0;
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" <<x<< "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A'){ // if grade is A
			//Do something
			count[0]++;
			total++;
		}else if(grade == 'B'){ // if grade is B
			//Do something
			count[1]++;
			total++;
		//and so on ... for grade = C, D, F	
		}else if(grade == 'C'){ 
			count[2]++;
			total++;
		}else if(grade == 'D'){ 
			count[3]++;
			total++;
		}else if(grade == 'F'){ 
			count[4]++;
			total++;
		}else{ // grade is wrong input
			if(grade != '0'){
			//Do something
				cout<<"Wrong input. Please input again.\n";
				continue;
			}else
				break;
		} x++;
	}while(grade != '0');
	
	
	cout << "In total " << total << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	//	and so on ... for grade = C, D, F	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] <<" ";
	
	return 0;
}
