#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
	string Name,City; // name
	int RollNumber, Age ,Contact;
	float CGPA;
	Node* next; // pointer to next
};

class List
{
	public:
	List(void) { head = NULL; } // constructor
	~List(void); // destructor
	
	Node* InsertNode(  int RollNumber, int Age ,int Contact, float CGPA,string Name,string City);
	void DisplayList();
	
	private:
	Node* head;
};



Node* List::InsertNode( int RollNumber, int Age ,int Contact, float CGPA,string Name,string City)
{
	Node* newNode = new Node;
	
	newNode->RollNumber = RollNumber; 
	newNode->Age = Age; 
	newNode->Contact = Contact; 
	newNode->CGPA = CGPA; 
	newNode->Name = Name;  
	newNode->City = City;
	
	newNode->next = head;
	head= newNode;

return newNode;
}



void List::DisplayList()
{
	int ARRsize=0,i=0;
	Node* currNode = head;
	
	while (currNode != NULL)
	{
		if(currNode->CGPA<2.5){
			ARRsize++;
		}
		currNode = currNode->next;
	 }
	 
	 Node* arr[ARRsize];
	 Node* currNode2 = head;
	 
	 	while (currNode2 != NULL){
			if(currNode2->CGPA<2.5){
				arr[i]=currNode2;
				i++;
			}
			currNode2 = currNode2->next;
		 }
	 
	 for(int i=0;i<ARRsize;i++){
	 	int dublicate=0;
	 	for(int j=0;j<ARRsize;j++){
	 		if(arr[i]->RollNumber==arr[j]->RollNumber){dublicate++;}
		 }
		 
		 if(dublicate<2){
			cout<<" "<<arr[i]->Name<<endl;
		}
	}
	
}

List::~List(void)
{
}




int main(void)
{
List student;


student.InsertNode(2150,15,33391815785,2.0,"Ben    ","islamabad");  //RollNumber, Age ,Contact,CGPA, Name, City
student.InsertNode(2151,20,33343491833,1.2,"gween  ","Peshawer");   //RollNumber, Age ,Contact,CGPA, Name, City
student.InsertNode(2152,20,33393218345,2.1,"Ali    ","Lahore");     //RollNumber, Age ,Contact,CGPA, Name, City
student.InsertNode(2153,63,33391578518,3.6,"Omer   ","islamabad");  //RollNumber, Age ,Contact,CGPA, Name, City
student.InsertNode(2564,20,33343918324,2.2,"Aslam  ","Karachi");    //RollNumber, Age ,Contact,CGPA, Name, City
student.InsertNode(2955,50,33344343918,2.7,"Imran  ","Peshawer");   //RollNumber, Age ,Contact,CGPA, Name, City
student.InsertNode(2172,20,33345345918,1.0,"Nawaz  ","Lahore");     //RollNumber, Age ,Contact,CGPA, Name, City
student.InsertNode(2445,50,33334324918,3.2,"Harry  ","Karachi");    //RollNumber, Age ,Contact,CGPA, Name, City
student.InsertNode(2178,20,33373468918,2.1,"Rehan  ","Peshawer");   //RollNumber, Age ,Contact,CGPA, Name, City
student.InsertNode(2472,59,33843573918,1.5,"Anum   ","islamabad");  //RollNumber, Age ,Contact,CGPA, Name, City
student.InsertNode(2175,49,34563673918,2.2,"Urooj  ","Karachi");    //RollNumber, Age ,Contact,CGPA, Name, City
student.InsertNode(2472,57,33783343918,1.5,"Saba   ","Lahore");     //RollNumber, Age ,Contact,CGPA, Name, City
student.InsertNode(2152,35,33763483918,2.0,"Seher  ","Peshawer");   //RollNumber, Age ,Contact,CGPA, Name, City
student.InsertNode(5175,30,33234343918,2.2,"Naina  ","islamabad");  //RollNumber, Age ,Contact,CGPA, Name, City
student.InsertNode(2178,70,33786573918,2.1,"Sanum  ","Peshawer");   //RollNumber, Age ,Contact,CGPA, Name, City
student.InsertNode(4672,40,33673483918,3.4,"Pashmina","islamabad"); //RollNumber, Age ,Contact,CGPA, Name, City
student.InsertNode(2175,21,33784653918,2.2,"Rashid ","islamabad");  //RollNumber, Age ,Contact,CGPA, Name, City
student.InsertNode(2562,23,33586733918,2.2,"Wagma  ","Peshawer");   //RollNumber, Age ,Contact,CGPA, Name, City
student.InsertNode(2778,25,33376776918,4.0,"Mishal ","Karachi");    //RollNumber, Age ,Contact,CGPA, Name, City
student.InsertNode(2175,25,33345676918,2.2,"Gooh   ","Lahore");     //RollNumber, Age ,Contact,CGPA, Name, City
student.InsertNode(2878,25,33554693918,1.1,"Gull   ","Peshawer");   //RollNumber, Age ,Contact,CGPA, Name, City
student.InsertNode(2556,29,33367575918,3.1,"Komal  ","islamabad");  //RollNumber, Age ,Contact,CGPA, Name, City

cout<<"\n  Names Of Students Whose CGPS Is Less Than 2.5 \n\n";
student.DisplayList();
}
