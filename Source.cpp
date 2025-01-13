#include<iostream>
using namespace std;
int main()


{
	//declare variables
	float gigabytesOfData, megabytesOfData, lowQualityHours, normalQualityHours, highQualityHours, wishToDownload;

	int  download;
	// constants for data usage (per hour) in MB

	const float lowQuality = 43.2,
		normalQuality = 72,
		highQuality = 115.2;


	//bytes in gigabyte
	const int bytesPerGigabytes = 1000000000;

	//bytes in megabyte
	const int bytesPerMegabytes = 1000000;

	//prompt user to include their hotspot data plan in gigabytes(per month)
	cout << " How many gigabytes of data are you including in your monthly hotspot plan? " << endl;
	cin >> gigabytesOfData;

	

	megabytesOfData = gigabytesOfData * bytesPerGigabytes / bytesPerMegabytes;

	//calculate the number of hours for low, normal, and high quality music the user can stream (monthly).
	lowQualityHours = megabytesOfData / lowQuality;
	normalQualityHours = megabytesOfData / normalQuality;
	highQualityHours = megabytesOfData / highQuality;


	//prompt user if they wish to download Low, Normal or High quality music the user can stream
	cout << "What do you wish to download? (1) for Low, (2) for Normal or (3) for High quality music." << endl;
	cin >> download;

	switch (download)

	{
	case 1:
		wishToDownload = megabytesOfData / lowQuality;
		cout << " You are able to stream " << wishToDownload << "hrs of music per month at low quality. " << endl;
		break;

	case 2:
		wishToDownload = megabytesOfData / normalQuality;
		cout << " You are able to stream " << wishToDownload << "hrs of music per month at normal quality. " << endl;
		break;

	case 3:
		wishToDownload = megabytesOfData / highQuality;
		cout << " You are bale to stream " << wishToDownload << "hrs of music per month at high quality. " << endl;
		break;

	default:
			cout << " Wrong! You must enter the correct download you wish to do using one of the following options: (1) for Low, (2) for Normal or (3) for High quality music. ";
		break;


	}



		return 0;
	}


/*
 How many gigabytes of data are you including in your monthly hotspot plan?
80
What do you wish to download? (1) for Low, (2) for Normal or (3) for High quality music.
1
 You are able to stream 1851.85hrs of music per month at low quality.

*/