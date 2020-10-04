#include<semaphore.h>
#include<stdlib.h>
#include<pthread.h>
#include<iostream>

using namespace std;

typedef enum{local,mail,special}Type;

sem_t s[20], mutex;

int n,n1,nt[100],count;

        void CountNoOfTracks();
        void SearchTrack(int[], int, int, int);
        void* ManageTrainRoute(void*);
        bool IsTrackAvailable(int);
        void* runningThread(void*);
        int getUpcomingTrack(int,int);
        int getTrainForTrackWithTopPriority(int);
        int* TrainsWithPriority(int,Type);
        int display();

class Train
{
	public:
	    Train();
	    int no,
	    CurrentTrack,
	    UpcomingTrack;
		string source,dest;
		Type type;
		pthread_t p;
		int tr[10],n1;
   public:
        int currentTrack();
        int upcomingTrack();
        string settype(string);
}t[20];

