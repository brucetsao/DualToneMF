class DTMFDevice {
public:
	DTMFDevice(int port);
	int goertzel(int Freq);
	char getTone();
	void calibrate();
private:
	int calib;
	int ain;
	int buff[6];
	void sample();
}