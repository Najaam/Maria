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
		cout<<"Come back again any time";
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
	 }else if(c ==5){
	 	home(username);
	 }
}
void gb2(string username){
	void fighting2gb(string);
	void shooting2gb(string);
	void adventure2gb(string);
	string gname,ram;
	 int c,gprice;
	cout<<"----------------Mobile 2gb Ram----------------"<<endl<<endl;

    cout<<"1 fighting mobile games"<<endl;
	cout<<"2 Advanture mobile games"<<endl;
	cout<<"3 Shooting mobile games"<<endl;
	cout<<"4 for going back"<<endl;
	cout<<"Enter number of your choice: ";
	cin>>c;
	 		if(c==1){
 	  fighting2gb(username);
	 }else if(c==2){
	  adventure2gb(username);
	 }else if(c==3){
		 shooting2gb(username);
	 }else if(c==4){
	 	mobile(username);
	 }
	 
	 }
//2gb supporting functions
void fighting2gb(string username){
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
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			gb2(username);
		}
       
}
void shooting2gb(string username){
	    system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("mobile.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram>>gerne >> gprice) {
               if(ram == "2gb" && gerne=="shooting"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
            }
			}
       		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			gb2(username);
		}
}
void adventure2gb(string username){
	    system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("mobile.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram>>gerne >> gprice) {
               if(ram == "2gb" && gerne=="shooting"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
            }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			gb2(username);
		}
}
//_______________________________________________________
void gb3(string username){
	void fighting3gb(string);
	void shooting3gb(string);
	void adventure3gb(string);
	string gname,ram;
	 int c,gprice;
	cout<<"----------------Mobile 3gb Ram----------------"<<endl<<endl;

    cout<<"1 fighting mobile games"<<endl;
	cout<<"2 Advanture mobile games"<<endl;
	cout<<"3 Shooting mobile games"<<endl;
	cout<<"4 for going back"<<endl;
	cout<<"Enter number of your choice: ";
	cin>>c;
	 		if(c==1){
 	  fighting3gb(username);
	 }else if(c==2){
	  adventure3gb(username);
	 }else if(c==3){
		 shooting3gb(username);
	 }else if(c==4){
	 mobile(username);
	 }
	 
	 }
//3gb supporting functions
void fighting3gb(string username){
	    system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("mobile.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram>>gerne >> gprice) {
                 if(ram == "2gb" || ram =="3gb" ){
               	if( gerne=="fighting"){
				   
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			gb2(username);
		}
       
}
void shooting3gb(string username){
	    system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("mobile.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram>>gerne >> gprice) {
               if(ram == "2gb" || ram =="3gb" ){
               	if( gerne=="shooting"){
				   
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
       		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			gb2(username);
		}
}
void adventure3gb(string username){
	    system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("mobile.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram>>gerne >> gprice) {
                if(ram == "2gb" || ram =="3gb" ){
               	if( gerne=="advanture"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			gb2(username);
		}
}
//_______________________________________________________
void gb4(string username){
	void fighting4gb(string);
	void shooting4gb(string);
	void adventure4gb(string);
	string gname,ram;
	 int c,gprice;
	cout<<"----------------Mobile 3gb Ram----------------"<<endl<<endl;

    cout<<"1 fighting mobile games"<<endl;
	cout<<"2 Advanture mobile games"<<endl;
	cout<<"3 Shooting mobile games"<<endl;
	cout<<"4 for going back"<<endl;
	cout<<"Enter number of your choice: ";
	cin>>c;
	 		if(c==1){
 	  fighting4gb(username);
	 }else if(c==2){
	  adventure4gb(username);
	 }else if(c==3){
		 shooting4gb(username);
	 }else if(c==4){
	 mobile(username);
	 }
	 
	 }
//4gb supporting functions
void fighting4gb(string username){
	    system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("mobile.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram>>gerne >> gprice) {
                 if(ram == "2gb" || ram =="3gb" ||  ram =="4gb"  ){
               	if( gerne=="fighting"){
				   
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			gb3(username);
		}
       
}
void shooting4gb(string username){
	    system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("mobile.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram>>gerne >> gprice) {
               if(ram == "2gb" || ram =="3gb" ||  ram =="4gb" ){
               	if( gerne=="shooting"){
				   
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
       		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			gb4(username);
		}
}
void adventure4gb(string username){
	    system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("mobile.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram>>gerne >> gprice) {
                if(ram == "2gb" || ram =="3gb" ||  ram =="4gb" ){
               	if( gerne=="advanture"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			gb4(username);
		}
}
//___________________________________________________________
void gb6(string username){
	void fighting6gb(string);
	void shooting6gb(string);
	void adventure6gb(string);
	string gname,ram;
	 int c,gprice;
	cout<<"----------------Mobile 6gb Ram----------------"<<endl<<endl;

    cout<<"1 fighting mobile games"<<endl;
	cout<<"2 Advanture mobile games"<<endl;
	cout<<"3 Shooting mobile games"<<endl;
	cout<<"4 for going back"<<endl;
	cout<<"Enter number of your choice: ";
	cin>>c;
	 		if(c==1){
 	  fighting6gb(username);
	 }else if(c==2){
	  adventure6gb(username);
	 }else if(c==3){
		 shooting6gb(username);
	 }else if(c==4){
	 	home(username);
	 }
	 }
//6gb supporting functions
void fighting6gb(string username){
	    system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("mobile.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram>>gerne >> gprice) {
                 if(ram == "2gb" || ram =="3gb" ||  ram =="4gb" || ram =="6gb" ){
               	if( gerne=="fighting"){
				   cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			gb6(username);
		}
       
}
void shooting6gb(string username){
	    system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("mobile.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram>>gerne >> gprice) {
               if(ram == "2gb" || ram =="3gb" ||  ram =="4gb" || ram =="6gb"){
               	if( gerne=="shooting"){
				   
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
       		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			gb6(username);
		}
}
void adventure6gb(string username){
	    system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("mobile.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram>>gerne >> gprice) {
                if(ram == "2gb" || ram =="3gb" ||  ram =="4gb" || ram =="6gb"){
               	if( gerne=="advanture"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			gb6(username);
		}
}

//---------------------------------------------------
void pc(string username){
void highend(string);
void midend(string);
void lowend(string);

		system("cls");
	int c;
	cout<<"----------------PC Games----------------"<<endl<<endl;

    cout<<"1 for Highend Pc games"<<endl;
	cout<<"2 for Mediumend Pc games"<<endl;
	cout<<"3 for LowEnd Pc games"<<endl;
	cout<<"4 for going back"<<endl;
	cout<<"Enter number of your choice: ";
	cin>>c;
	
		if(c==1){
 	 highend(username);
	 }else if(c==2){
	 midend(username);
	 }else if(c==3){
		lowend(username);
	 }else if(c==4){
	     home(username);
	 }
}	
// PC supporting functions
 void highend(string username){
 		void fightinghighend(string);
		void shootinghighend(string);
		void adventurehighend(string);
	string gname,ram;
	 int c,gprice;
	cout<<"----------------HighEnd Pc Games---------------"<<endl<<endl;
    cout<<"1 fighting games"<<endl;
	cout<<"2 Advanture games"<<endl;
	cout<<"3 Shooting  games"<<endl;
	cout<<"4 for going back"<<endl;
	cout<<"Enter number of your choice: ";
	cin>>c;
	if(c==1){
 	  fightinghighend(username);
	 }else if(c==2){
	  adventurehighend(username);
	 }else if(c==3){
		 shootinghighend(username);
	 }else if(c==4){
	 	pc(username);
	 }
	 }

 void fightinghighend(string username){
 	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("pc.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if(ram == "highend" || ram =="midend" ||  ram =="lowend"){
               	if( gerne=="fighting"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			pc(username);
		}
 }
void shootinghighend(string username){
	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("pc.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if(ram == "highend" || ram =="midend" ||  ram =="lowend"){
               	if( gerne=="shooting"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			pc(username);
		}
}
void adventurehighend(string username){
	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("pc.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if(ram == "highend" || ram =="midend" ||  ram =="lowend"){
               	if( gerne=="adventure"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			pc(username);
		}
}
 //_____________________________________________________
void midend(string username){
 		void fightingmidend(string);
		void shootingmidend(string);
		void adventuremidend(string);
	string gname,ram;
	 int c,gprice;
	cout<<"----------------MidEnd Pc Games---------------"<<endl<<endl;
    cout<<"1 fighting games"<<endl;
	cout<<"2 Advanture games"<<endl;
	cout<<"3 Shooting  games"<<endl;
	cout<<"4 for going back"<<endl;
	cout<<"Enter number of your choice: ";
	cin>>c;
	if(c==1){
 	  fightingmidend(username);
	 }else if(c==2){
	  adventuremidend(username);
	 }else if(c==3){
		 shootingmidend(username);
	 }else if(c==4){
	 	pc(username);
	 }
	 }
 
 void fightingmidend(string username){
 	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("pc.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if( ram =="midend" ||  ram =="lowend"){
               	if( gerne=="fighting"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			pc(username);
		}
 }
void shootingmidend(string username){
	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("pc.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if( ram =="midend" ||  ram =="lowend"){
               	if( gerne=="shooting"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			pc(username);
		}
}
void adventuremidend(string username){
	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("pc.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if( ram =="midend" ||  ram =="lowend"){
               	if( gerne=="adventure"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			pc(username);
		}
}
 
//_____________________________________________________
 void lowend(string username){
 		void fightinglowend(string);
		void shootinglowend(string);
		void adventurelowend(string);
	string gname,ram;
	 int c,gprice;
	cout<<"----------------LowEnd Pc Games---------------"<<endl<<endl;
    cout<<"1 fighting games"<<endl;
	cout<<"2 Advanture games"<<endl;
	cout<<"3 Shooting  games"<<endl;
	cout<<"4 for going back"<<endl;
	cout<<"Enter number of your choice: ";
	cin>>c;
	if(c==1){
 	  fightinglowend(username);
	 }else if(c==2){
	  adventurelowend(username);
	 }else if(c==3){
		 shootinglowend(username);
	 }else if(c==4){
	 	pc(username);
	 }
	 }
 
 void fightinglowend(string username){
 	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("pc.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if( ram =="lowend"){
               	if( gerne=="fighting"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			pc(username);
		}
 }
void shootinglowend(string username){
	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("pc.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if(  ram =="lowend"){
               	if( gerne=="shooting"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			pc(username);
		}
}
void adventurelowend(string username){
	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("pc.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if(ram =="lowend"){
               	if( gerne=="adventure"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			pc(username);
		}
}
//-----------------------------------------------------

void xbox(string username){
void xboxseriesx(string);
void xboxone(string);
void xbox360(string);

		system("cls");
	int c;
	cout<<"----------------Xbox Games----------------"<<endl<<endl;

    cout<<"1 for Xbox series X / S"<<endl;
	cout<<"2 for Xbox one"<<endl;
	cout<<"3 for Xbox 360"<<endl;
	cout<<"4 for going back"<<endl;
	cout<<"Enter number of your choice: ";
	cin>>c;
	
		if(c==1){
 	xboxseriesx(username);
	 }else if(c==2){
	 xboxone(username);
	 }else if(c==3){
		xbox360(username);
	 }else if(c==4){
	     home(username);
	 }
}	
void xboxseriesx(string username){
 		void fightingxs(string);
		void shootingxs(string);
		void adventurexs(string);
	string gname,ram;
	 int c,gprice;
	cout<<"----------------Xbox series x Games---------------"<<endl<<endl;
    cout<<"1 fighting games"<<endl;
	cout<<"2 Advanture games"<<endl;
	cout<<"3 Shooting  games"<<endl;
	cout<<"4 for going back"<<endl;
	cout<<"Enter number of your choice: ";
	cin>>c;
	if(c==1){
 	  fightingxs(username);
	 }else if(c==2){
	  adventurexs(username);
	 }else if(c==3){
		 shootingxs(username);
	 }else if(c==4){
	 	pc(username);
	 }
	 }

 void fightingxs(string username){
 	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("xbox.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if(ram == "seriesx"){
               	if( gerne=="fighting"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			xbox(username);
		}
 }
void shootingxs(string username){
	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("xbox.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if(ram == "seriesx" ){
               	if( gerne=="shooting"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			xbox(username);
		}
}
void adventurexs(string username){
	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("xbox.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if(ram == "seriesx"){
               	if( gerne=="adventure"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			xbox(username);
		}
}
 //_____________________________________________________
void xboxone(string username){
 		void fightingone(string);
		void shootingone(string);
		void adventureone(string);
	string gname,ram;
	 int c,gprice;
	cout<<"----------------Xbox one Games---------------"<<endl<<endl;
    cout<<"1 fighting games"<<endl;
	cout<<"2 Advanture games"<<endl;
	cout<<"3 Shooting  games"<<endl;
	cout<<"4 for going back"<<endl;
	cout<<"Enter number of your choice: ";
	cin>>c;
	if(c==1){
 	  fightingone(username);
	 }else if(c==2){
	  adventureone(username);
	 }else if(c==3){
		 shootingone(username);
	 }else if(c==4){
	 	xbox(username);
	 }
	 }
 
 void fightingone(string username){
 	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("xbox.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if(  ram =="one" ){
               	if( gerne=="fighting"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			xbox(username);
		}
 }
void shootingone(string username){
	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("xbox.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if(  ram =="one" ){
               	if( gerne=="shooting"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			xbox(username);
		}
}
void adventureone(string username){
	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("xbox.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if(  ram =="one"){
               	if( gerne=="adventure"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			xbox(username);
		}
}
 
//_____________________________________________________
 void xbox360(string username){
 		void fighting360(string);
		void shooting360(string);
		void adventure360(string);
	string gname,ram;
	 int c,gprice;
	cout<<"----------------Xbox 360 Games---------------"<<endl<<endl;
    cout<<"1 fighting games"<<endl;
	cout<<"2 Advanture games"<<endl;
	cout<<"3 Shooting  games"<<endl;
	cout<<"4 for going back"<<endl;
	cout<<"Enter number of your choice: ";
	cin>>c;
	if(c==1){
 	  fighting360(username);
	 }else if(c==2){
	  adventure360(username);
	 }else if(c==3){
		 shooting360(username);
	 }else if(c==4){
	 	xbox(username);
	 }
	 }
 
 void fighting360(string username){
 	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("xbox.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if( ram =="360"){
               	if( gerne=="fighting"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			xbox(username);
		}
 }
void shooting360(string username){
	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("xbox.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if(  ram =="360"){
               	if( gerne=="shooting"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			xbox(username);
		}
}
void adventure360(string username){
	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("xbox.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if(ram =="360"){
               	if( gerne=="adventure"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			xbox(username);
		}
}
//---------------------------------------------------------
void ps(string username){
void ps5(string);
void ps4(string);
void ps3(string);

		system("cls");
	int c;
	cout<<"---------------Playstation Games----------------"<<endl<<endl;

    cout<<"1 for PS 5"<<endl;
	cout<<"2 for PS 4"<<endl;
	cout<<"3 for PS 3"<<endl;
	cout<<"4 for going back"<<endl;
	cout<<"Enter number of your choice: ";
	cin>>c;
	
		if(c==1){
 	ps5(username);
	 }else if(c==2){
	 ps4(username);
	 }else if(c==3){
		ps3(username);
	 }else if(c==4){
	     home(username);
	 }
}	
void ps5(string username){
 		void fightingps5(string);
		void shootingps5(string);
		void adventureps5(string);
	string gname,ram;
	 int c,gprice;
	cout<<"----------------PlayStation 5 Games---------------"<<endl<<endl;
    cout<<"1 fighting games"<<endl;
	cout<<"2 Advanture games"<<endl;
	cout<<"3 Shooting  games"<<endl;
	cout<<"4 for going back"<<endl;
	cout<<"Enter number of your choice: ";
	cin>>c;
	if(c==1){
 	  fightingps5(username);
	 }else if(c==2){
	  adventureps5(username);
	 }else if(c==3){
		 shootingps5(username);
	 }else if(c==4){
	 	pc(username);
	 }
	 }

 void fightingps5(string username){
 	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("ps.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if(ram == "ps5"){
               	if( gerne=="fighting"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			ps(username);
		}
 }
void shootingps5(string username){
	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("ps.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if(ram == "ps5" ){
               	if( gerne=="shooting"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			ps(username);
		}
}
void adventureps5(string username){
	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("ps.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if(ram == "ps5"){
               	if( gerne=="adventure"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			ps(username);
		}
}
 //_____________________________________________________
void ps4(string username){
 		void fightingps4(string);
		void shootingps4(string);
		void adventureps4(string);
	string gname,ram;
	 int c,gprice;
	cout<<"----------------PlayStation 4 Games---------------"<<endl<<endl;
    cout<<"1 fighting games"<<endl;
	cout<<"2 Advanture games"<<endl;
	cout<<"3 Shooting  games"<<endl;
	cout<<"4 for going back"<<endl;
	cout<<"Enter number of your choice: ";
	cin>>c;
	if(c==1){
 	  fightingps4(username);
	 }else if(c==2){
	  adventureps4(username);
	 }else if(c==3){
		 shootingps4(username);
	 }else if(c==4){
	 	ps(username);
	 }
	 }
 
 void fightingps4(string username){
 	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("ps.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if(  ram =="ps4" ){
               	if( gerne=="fighting"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			ps(username);
		}
 }
void shootingps4(string username){
	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("ps.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if(  ram =="ps4" ){
               	if( gerne=="shooting"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			ps(username);
		}
}

void adventureps4(string username){
	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("ps.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if(  ram =="ps4"){
               	if( gerne=="adventure"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			ps(username);
		}
}
 
//_____________________________________________________
 void ps3(string username){
 		void fightingps3(string);
		void shootingps3(string);
		void adventureps3(string);
	string gname,ram;
	 int c,gprice;
	cout<<"----------------PlayStation 3 Games---------------"<<endl<<endl;
    cout<<"1 fighting games"<<endl;
	cout<<"2 Advanture games"<<endl;
	cout<<"3 Shooting  games"<<endl;
	cout<<"4 for going back"<<endl;
	cout<<"Enter number of your choice: ";
	cin>>c;
	if(c==1){
 	  fightingps3(username);
	 }else if(c==2){
	  adventureps3(username);
	 }else if(c==3){
		 shootingps3(username);
	 }else if(c==4){
	 	xbox(username);
	 }
	 }
 
 void fightingps3(string username){
 	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("ps.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if( ram =="ps3"){
               	if( gerne=="fighting"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			ps(username);
		}
 }
void shootingps3(string username){
	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("ps.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if(  ram =="ps3"){
               	if( gerne=="shooting"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			ps3(username);
		}
}
void adventureps3(string username){
	system("cls");
	    string gname,ram,gerne;
	    int gprice;
        ifstream file("ps.txt");
           cout << "Game-name" << setw(30) << "Game-price" << endl;
		    while (file >> gname >> ram >>gerne >> gprice) {
                if(ram =="ps3"){
               	if( gerne=="adventure"){
			       cout << setw(30) << left << gname << right << setw(5) << gprice << endl;
           }
		    }
			}
		int c;
		cout<<"Press 0 to go back: ";
		cin>>c;
		if (c==0){
			ps3(username);
		}
}
//---------------------------------------------------------
