#include <iostream>
using namespace std;

class SmartPhone
{
private:
    string serialnumber;
    string model;
    string username;
    int Ram;
    float processorfreaquency;
    int sockets;

public:
    SmartPhone()
    {

        serialnumber = "13ef356fwed2";
        model = "a-715-75-91f";
        processorfreaquency = 2.6;
        sockets = 2;
    };

    void getAlldata()
    {
        cout << "Serialnumber: " << serialnumber << endl;
        cout << "Model: " << model << endl;
        cout << "Username: " << username << endl;
        cout << "Ram: " << Ram << endl;
    }

    void getfrequency()
    {
        cout << endl;
        cout << "Processorfreaquency: " << processorfreaquency << endl;
        cout << endl;
    }

    void getsockets()
    {
        cout << endl;
        cout << "Sockets: " << sockets << endl;
    }

    void setusername(string newusername)
    {
        username = newusername;
    }

    void setRam(int newRam)
    {

        Ram = newRam;
    }
    ~SmartPhone(){};
};

class laptop
{
private:
    string name;
    int Ram;
    float frequency;
    int localmemory;
    int lenght;
    int widght;
    float weight;

public:
    laptop()
    {
        name = "Acer";
        Ram = 16;
        frequency = 3.2;
        localmemory = 1024;
        lenght = 100;
        widght = 100;
        weight = 2.160;
    };
    laptop(string name1)
    {
        name = name1;
    }

    void showPhysicalChar()
    {
        cout << "PhysicalCharacteristics:" << endl;
        cout << "Lenght: " << lenght << endl;
        cout << "Widght: " << widght << endl;
        cout << "Weight: " << weight << endl;
        cout << endl;
    }

    void showTechChar()
    {
        cout << "TechnicalCharacteristics:" << endl;
        cout << "Frequency: " << frequency << endl;
        cout << "Localmemory: " << localmemory << endl;
        cout << "Ram: " << Ram << endl;
        cout << endl;
    }

    void setname(string newname)
    {
        name = newname;
    }

    void getcompanyname()
    {

        cout << "Companyname: " << name << endl;
    }

    void getFreq()
    {

        cout << "Frequency: " << frequency << endl;
    }
    ~laptop(){};
};

class SocialMedia
{
private:
    string name;
    string surname;
    int usrId;
    string email;

public:
    SocialMedia()
    {
        name = "Sviatoslav";
        surname = "Pylyptsiv";
        usrId = 0x120;
        email = "Sviatoslav.Pylyptsiv@gmail.com";
    };

    void getusrId()
    {
        cout << "UserId: " << usrId << endl;
    }

    void getEmail()
    {
        cout << "Email: " << email << endl;
    }
    ~SocialMedia(){};
};
class Twitter : private SocialMedia
{
private:
    string twiAccountName;
    int followers_N;
    int following_N;
    int posts_N;

public:
    Twitter()
    {
        twiAccountName = "Sviat_twit";
        followers_N = 100;
        following_N = 0;
        posts_N = 0;
    };

    void addNewPost()
    {
        posts_N += 1;
        cout << "Number of posts: " << posts_N << endl;
    }

    void addNewFollowing()
    {
        following_N += 1;
        cout << "Number of followings: " << following_N << endl;
    }

    void delFollowers()
    {
        followers_N -= 1;
        cout << "Number of follwers: " << followers_N << endl;
    }

    ~Twitter(){};
};

/*
    1. Implement class that describes your Phone :)

       Write everything you want, just describe this object!

       But, this must have at least, 3 fields, 1 constructor, 1 destructor, 2 setters and 2 getters, and also some printing method
       that show all information about phone.

       NOTE: every fields must be private.
*/

/*
    2. Implement class that describes your laptop with folowing fields:
        -   company name;
        -   inner technical characteristics: RAM, Frequency, size of local storage, etc.;
        -   physical characteristics: sizes and weight, etc.;

       This class must have 2 print methons:
        -   showTechChar() - print all inner technical characteristics;
        -   showPhysicalChar() - print all physical characteristics;

       This class must have 2 getters:
        -   getCompanyName() - return company name of laptop;
        -   getFreq() - return Frequency of of laptop;

       This class must have 1 setter:
        -   setCompanyName(string com_name) - assign to company name some value from parameter;

       And also it must have 2 constructors:
        -   default constructor (that assign some default values for all fields)
        -   constructor with parameter of company name (string)

       There is examples of creating this class:
            Laptop L1("Lenovo");
            Laptop L2;
            L2.setCompanyName("Mac");

       NOTE: every fields must be private.
       NOTE: YOU FEEL FREE to add another getters or setters, if you want or need it!
*/

/*
    Не обов'язково :)
    Для тих кому малувато буде те шо вище:


    3.1*. Implement SocialMedia class.

        It must have these fields:
            1. name and surname of user (string);
            2. usrID - user identifier in hex format (int). For example: int usrID = 0x100;
            3. email (string);

        Also, it must have the following methods:
            1. getUsrID - return user identifier;
            2. getEmail() - return email of user;


    3.2*. Implement Twitter class that is inherited from SocialMedia class.

        It must have these fields:
            1. twiAccountName - account name of user;
            2. followers_N - number of followers of user;
            3. following_N - number of following users of the user;
            4. posts_N - number of posts of the user;

        It must have setters and getters for ALL above fields.

        Also, implement the following methods:
            - addNewPost() - method that accept some text as argument and print it to the console;
            - addFollowing() - method that adds new following to the number of following of the user;
            - delFollower() - method that deletes follower from the number of followers of the user;
*/

int main()
{ // 1 ____________________________________________________________;
    cout << endl;
    cout << "Task 1___________________________________________________________________________________" << endl;
    cout << endl;
    SmartPhone Myphone;
    Myphone.setusername("Sviatoslav");
    Myphone.setRam(8);
    Myphone.getAlldata();
    Myphone.getsockets();
    Myphone.getfrequency();
    cout << endl;

    // 2_____________________________________________________________;
    cout << "Task 2___________________________________________________________________________________" << endl;
    cout << endl;
    laptop mylaptop;
    mylaptop.showTechChar();
    mylaptop.showPhysicalChar();
    mylaptop.getFreq();
    mylaptop.getcompanyname();
    cout << endl;
    mylaptop.setname("HP");
    mylaptop.getcompanyname();
    cout << endl;
    laptop notmylaptop("Asus");
    notmylaptop.getcompanyname();
    cout << endl;
    // 3_____________________________________________________________;
    cout << "Task 3___________________________________________________________________________________" << endl;
    cout << endl;
    Twitter mytwitter;
    mytwitter.addNewFollowing();
    mytwitter.addNewPost();
    mytwitter.delFollowers();

    return 0;
}