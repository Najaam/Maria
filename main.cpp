#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

void intro();
void reg();
void login();
void home(string);
void mobile(string);
void pc(string);
void xbox(string);
void ps(string);

int main(){
	intro();
}
//Welcome screen
void intro(){
	system("cls");
	int choice;
	system("Color 0E");

cout<<"---------------- Welcome ----------------"<<endl<<endl;

cout<<"Press 1 for Login"<<endl;
cout<<"press 2 for Registraion"<<endl;
cout<<"Press 3 to Quit"<<endl;
cout<<endl;

cout<<"Enter Number of Your choice : ";
	cin>>choice;
if(choice == 1){
	login();
}else if(choice == 2){
	reg();
}else if(choice == 3){
		reg();
}
}
// Reg/Login work
void login(){
    string username,password,user,pass;
    bool found = false;
     system("cls");
    cout<<"---------------- Welcome To User Login Page ----------------"<<endl<<endl;
    cout<<"Enter Your username : ";
    cin>>username;
    cout<<"Enter Your Password : ";
    cin>>password;

    ifstream files("records.txt");
    while(files>>user>>pass){ 
        if(user== username && pass == password){
            found = true;
            break;
        }
    }
    files.close();

    if(found){
       home(username);
    }else{
       int c;
        cout<<endl<<"Wrong Username Or Password try Again"<<endl;
       
		cout<<" Registertation Screen press 1"<<endl;
	
		cout<<endl<<"Enter Number of Your choice : ";
		cin>>c;	
		if(c==1){
			reg();
		}
}
}
void reg() {
    string username, password, un, pw;
    bool isfound = false;
    int c;
    system("cls");
    cout << "---------------- Welcome To User Registration Page ----------------" << endl
         << endl;

    cout << "Enter Your username : ";
    cin >> username;
    cout << "Enter Your Password : ";
    cin >> password;
        ofstream files("records.txt", ios::app);
        files << username << " " << password << endl;
        files.close();
        cout << endl;
        cout << "\tRegistration Successful! Now you can login and enjoy our services." << endl;
        cout << endl << "Press 1 for Login Screen: ";
        cin >> c;
        if (c == 1) {
            login();
        }
}
// home screen
void home(string username){
	system("cls");
	int c;
	cout<<"----------------Home Screen----------------"<<endl<<endl;

    cout<<"1 for Mobile games"<<endl;
	cout<<"2 for PC games"<<endl;
	cout<<"3 for Xbox games"<<endl;
	cout<<"4 for PS games"<<endl;
	cout<<"5 for Logout"<<endl;
	

	cout<<endl<<"Enter The Number of Your choice : ";
 	cin>>c;
 	if(c==1){
 	 mobile(username);
	 }else if(c==2){
	  pc(username);
	 }else if(c==3){
	 	xbox(username);
	 }else if(c==4){
	 	ps(username);
	 }else if(c==5){
	 	intro();
	 }
}
// Mobile games
void mobile(string username){
void gb2(string);
void gb3(string);
void gb4(string);
void gb6(string);

		system("cls");
	int c;
	cout<<"----------------Mobile----------------"<<endl<<endl;

    cout<<"1 for 2GB mobile games"<<endl;
	cout<<"2 for 3GB mobile games"<<endl;
	cout<<"3 for 4GB mobile games"<<endl;
	cout<<"4 for 6GB mobile games"<<endl;
	cout<<"5 for going back"<<endl;
	cout<<"Enter number of your choice: ";
	cin>>c;
	
		if(c==1){
 	 gb2(username);
	 }else if(c==2){
	  gb3(username);
	 }else if(c==3){
		 gb4(username);
	 }else if(c==4){
	 	gb6(username);
	 }
}
void gb2(string username){
	void fighting(string);
	string gname,ram;
	 int count,c,gprice;
	cout<<"----------------Mobile 2gb Ram----------------"<<endl<<endl;

    cout<<"1 fighting mobile games"<<endl;
	cout<<"2 Advanture mobile games"<<endl;
	cout<<"3 Shooting mobile games"<<endl;
	cout<<"4 for going back"<<endl;
	cout<<"Enter number of your choice: ";
	cin>>c;
	 		if(c==1){
 	  fighting(username);
	 }else if(c==2){
	  system("cls");
	 }else if(c==3){
		 system("cls");
	 }else if(c==4){
	 	intro();
	 }
	 }

void fighting(string username){
	    system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("mobile.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram>>gerne >> gprice) {
               if(ram == "2gb" && gerne=="fighting"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
            }
			}
       
}

void gb3(string username){
	cout<<"3gb";
}

void gb4(string username){
	cout<<"4gb";
}
void gb6(string username){
	cout<<"6gb";
}

//---------------------------------------------------
void pc(string username){
	cout<<"PC Games";	
}

void xbox(string username){
		cout<<"xbox Games";
}

void ps(string username){
		cout<<"ps Games";
}



