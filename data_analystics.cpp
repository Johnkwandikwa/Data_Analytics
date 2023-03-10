#include <iostream>
#include <fstream>

using namespace std;

const int maxrow=10;


class file {
  public:
  file(){
    ofstream fout;
    fout.open("file_one.txt");
    fout<<"file_one";
    fout.close(); 
  }
};





                                    /*      ADMIN CRUD FOR MANAGERS      */

/*  STRINGS ARRAY VARIABLE FOR MANAGER*/

string MngID[maxrow]={};
string Mngname[maxrow]={};


void CreateManager(){
  char id[5];
  char name[50];

  cin.ignore();

  cout<<"Enter Manager ID:";
  cin.getline(id,5);
  cout<<"Enter Manager Name:";
  cin.getline(name,50);





/* A loop to check if an array is occupied  but for empty ones will be  */
  for (int x = 0; x < maxrow; x++)
  {
    if (MngID[x]=="\0")
    {
      MngID[x]=id;
      Mngname[x]=name;

      break;
    }
  }
}



void ViewManager()
{
  system("CLS");
  cout<<"===========Current Manager Records============="<<endl;
  cout<<"================================================"<<endl;
 /* The use of counter variables and displaying values of an array*/

 int counter = 0;
 cout<<"No.    | Manager ID   | Manager Name "<<endl<<"---------------------------------\n";

 for (int x = 0; x < maxrow; x++)
 {
  if (MngID[x]!="\0")
  
  {
    counter++;

    cout<<"      "  <<counter << "         " <<MngID[x]<<"         " <<Mngname[x]<<endl;

  }

 }


 if (counter==0)
 {
  cout <<"No Manager records" <<endl;

 }

 cout<<"================================"<<endl;
 


}

void SearchManager(string search)
{

  system("CLS");
  cout<<"===========Search  Record============="<<endl;
  cout<<"================================================"<<endl;

  int counter=0;

   for (int x = 0; x < maxrow; x++)


 {

  int counter =0;
  if (MngID[x] == search )
  
  {
    counter++;

    cout<<"      "  <<counter << "         " <<MngID[x]<<"         " <<Mngname[x]<<endl;
    break;

  }


 }  

if (counter==0)


 {
  cout <<"No Manager records" <<endl;

 }

 cout<<"================================"<<endl;

}
                                    /*     END OF CRUD FOR ADMIN ON MANAGERS  */

void Admin_Manager() {
    cout << "Manager manager\n";
    int option;
    system("CLS");

    do {
        cout << "1-Add new Manager" << endl;
        cout << "2-List Managers" << endl;
        cout << "3-Edit Current Manager Record" << endl;
        cout << "4-Delete a Manager Record" << endl;
        cout << "5-Search Manager record"<<endl;
        cout << "6-Back to Main Menu" << endl;
        cout << "Enter your Choice:" << endl;
        cin >> option;

        switch (option) {
        case 1:
            CreateManager();
            system("CLS");
            break;
        case 2:
            ViewManager();
            break; 
        case 5:
        cout<<"Search Manager by ID>>";
        getline(cin, MngID)
        SearchManager(MngID);
        break;


        }
        
    } while (option != 6);
}


void Admin(){
  std::cout<<"Welcome Admin\n";
  int option;
  system("CLS");

  do
  {
        cout<<"1-Manage Manager"<<endl;
        cout<<"2-Manage Customers"<<endl;
        cout<<"3-Back to Main Menu"<<endl;
        cout<<"Enter your Choice:"<<endl;
        cin>>option;


        switch (option)
        {
        case 1: Admin_Manager();
           system("CLS");
          /* code */
          break;

  /*      case 2: customers();  
          break; */
        }  

        

} while ( option !=3);


}





void Employee(){

}


class earnings{
        public:
        double profit;
        void show()
		{
		ifstream x("earnings.txt");
        if(!x)
        cout<<"PROFIT = 0 ";
        else{
        x>>profit;
        cout<<"\nTOTAL STARTING PROFIT:  "<<profit<<endl;
        x.close();
        }
        
        }

};


class product: public virtual earnings{
  public:
  int id[20];
  char name[20];
  char product_description[20];
  char product_category[20];
  double buying_price;
  double selling_price;
  double cost;
  double total_cost;
  double sales;
  int quantity;
  bool available;
  bool isFragile;
  double packaging_charges;

  void calculation()
  {
    cost=(buying_price*quantity);
    total_cost=cost+packaging_charges;
    sales=selling_price*quantity;
    profit=selling_price-buying_price;

  }

  void file();
  void get();


};

void product::get()
{
  int prod;
  cout<<"\n Number of Products\n";
  cin>>prod;
  for(int i=0;i<prod;i++){
    cout<<"\n Enter Product Name: \n";
    cin>>name;
    cout<<"\n Enter Product Description: \n";
    cin>>product_description;
    cout<<"\nEnter Product Category :\n";
    cin>>product_category;
    cout<<"\nEnter Product buying price:\n";
    cin>>buying_price;
    cout<<"\nEnter product selling price:\n";
    cin>>selling_price;

  }

}





class customers{

  int customer_id;
  char customer_name[20];
  char customer_address[20];
  int custormer_contact;
  };

  void customers(){

  }





  
int main(){

  std::cout<<"ONLINE MANAGEMENT SHOPPING SYSTEM\n";
  int option;
  system("CLS");

  do
  {
       cout<<"1-ADMIN"<<endl;
        cout<<"2-EMPLOYEE"<<endl;
        cout<<"3-CUSTOMERS"<<endl;
        cout<<"4-EXIT"<<endl;
        cout<<"Enter your Choice:"<<endl;
        cin>>option;


        switch (option)

        {
        case 1: Admin();
           system("CLS");
          /* code */
          break;

        case 2: Employee();
            
          break;

        case 3: customers();  
        default:
          break;
        }

  } while (option !=4);


  /*Only exit when 4 is inserted */
    

   
}
