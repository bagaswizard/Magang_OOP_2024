#include <vector>
#include <iostream>

using namespace std;
class ktp{
    public:
    string nama;
    int umur;
string tgl_lahir; 
    int umur;
string tgl_lahir; 


void out_ktp();

    private:
    int rekening = 602626426;  
};
using namespace std; 

class Student { 
	int roll; 
	string name; 
	int age; 
	int marks; 

public: 
	void getter() 
	{ 
		roll = 1;
		name = "John";
		age = 17;
		marks = 90;
	} 
	void disp() 
	{ 
		cout << roll << "\t" << name << "\t" << age << "\t"
			<< marks << "\n"; 
	} 
}; 

int main() 
{ 
	// Vector of class objects 
	vector<Student> v; 
	Student s; 

	for (int i = 0; i < 10; i++) { 
		// getting the random values from 
		// functions 
		s.getter(); 
		// inserting objects to vector 
		v.push_back(s); 
	} 

	for (int i = 0; i < 10; i++) { 
		// displaying object data 
		v[i].disp(); 
	} 

	return 0; 
}