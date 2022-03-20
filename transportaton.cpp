//done by Ayamba Bless
//Transportation problem
/* You are making a program for a bus service. A bus can transport 50 passengers at once. Given the number
passengers waiting in the bus station as input, you need to calculate and output how many empty seats the
last bus will have.
sample input: 126
sample output: 24
Explanation: The first bus will transport 50 passengers, leaving 126-50=76 in the station.
The next one will leave 26 in the station, thus the last bus will take all of the 26 passengers,
having 50-26=24 seats left empty.
*/
// Solution
#include<iostream>
using namespace std;
int main(){
    int rem, sits, passengers;
    cin >> passengers;
    if(passengers < 50){
        rem = 50 - passengers;
        cout << rem;
    }
    else{
        //number of passengers in the last bus
        rem = passengers % 50;
        // number of sits left
        sits = 50 - rem;
        cout << sits;
    }
    return 0;
}