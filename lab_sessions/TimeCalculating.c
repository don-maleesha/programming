#include <stdio.h>

#define HOURS_IN_DAY 24
#define MINUTES_IN_HOUR 60
#define SECONDS_IN_MINUTE 60

int main(){
	
	int total_seconds, hours, minutes, seconds;
	
	printf("Enter the total number of seconds: ");
	scanf("%d", &total_seconds);
	
	hours = total_seconds / (MINUTES_IN_HOUR * SECONDS_IN_MINUTE);
	total_seconds = total_seconds % (MINUTES_IN_HOUR * SECONDS_IN_MINUTE);
	
	minutes = total_seconds / SECONDS_IN_MINUTE;
	seconds = total_seconds % SECONDS_IN_MINUTE;
	
	printf("Time is= %d:%d:%d", hours, minutes, seconds);
	
	return 0;
}
