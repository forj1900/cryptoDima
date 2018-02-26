#include <iostream>

using namespace std;

const char checkNetworkStatus(int status);

int main(int argc, char *argv[]) {
	
	
	const char *callStatus[5];
	callStatus[0] = "Ready";
	callStatus[1] = "Could not get status";
	callStatus[2] = "Ringing (incoming)"; 
	callStatus[3] = "Ringing/in progress (outgoing)";
	callStatus[4] = "Unknown";
	
	for (int i = 0; i<=4; i++) {
		printf("%s \n", callStatus[i]);
	}
	
	printf("Network Status is %s \n", checkNetworkStatus(2));

}

char checkNetworkStatus(int status) {
	
	const char *networkStatus[6];

	networkStatus[0] = "Not registered";
	networkStatus[1] = "Registered (home)";
	networkStatus[2] = "Not registered (searching)";
	networkStatus[3] = "Denied";
	networkStatus[4] = "Unknown";
	networkStatus[5] = "Registered roaming";
	
	if (status <= 6 && status >=0) {
		return(networkStatus[status])
	}
	else {
		return(networkStatus[4])
	}
	
}