#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
const unsigned int N = 100001;

struct Workshop{                                                               
  int start, end, duration;                                                    
};                                                                             

struct Available_Workshops{                                                    
  int no_wrkshps;                                                              
  Workshop *ws = new Workshop[N];                                     
};                                                                             

//Implement the functions initialize and CalculateMaxWorkshops                 
Available_Workshops* initialize(int starts[], int durations[], int no_wss){       
  Available_Workshops* av_wss = new Available_Workshops();                     
  av_wss->no_wrkshps = no_wss;                                                 

  // Create array of workshops                                                 
  for (int i=0; i<no_wss; i++){                                                
    Workshop wrkshp;                                                           
    wrkshp.start = starts[i];                                                  
    wrkshp.end = starts[i] + durations[i];                                     
    wrkshp.duration = durations[i];                                            

    av_wss->ws[i] = wrkshp;                                                    
  }                                                                            

  return av_wss;                                                               
}                                                                              

int CalculateMaxWorkshops(Available_Workshops* ptr) {                                                                              
  int max_ws = 1;                                                              
  int no_ws = ptr->no_wrkshps;                                                 
  Workshop *wrkshps = ptr->ws;                                                 
  sort(wrkshps, wrkshps+no_ws);                                                
  Workshop prev = wrkshps[0];
  for (int itr=1 ; itr<no_ws; itr++) {                                                                            
    Workshop current = wrkshps[itr];                                           
    if (current.start >= prev.end) {                                                                          
      max_ws++;                                                                
      prev = current;                                                          
    }                                                                          
  }                                                                            
  return max_ws;                                                               
}                                                                              


bool operator<(Workshop const & a, Workshop const & b) {                                                                              
      return a.end < b.end;                                                    
} 

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}

