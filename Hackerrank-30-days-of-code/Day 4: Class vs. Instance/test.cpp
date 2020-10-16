// Just including the class. 

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
        if (initialAge > -1)    
            this -> age = initialAge;
        else {
            cout << "Age is not valid, setting age to 0.\n";
            this -> age = 0;
        }
    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console 
        if (this -> age < 13) {
            cout << "You are young.\n";
        } else if (this -> age < 18) {
            cout << "You are a teenager.\n";
        } else {
            cout << "You are old.\n";
        }
    }

    void Person::yearPasses(){
        // Increment the age of the person in here
        this -> age += 1;
    }