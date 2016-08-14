class Time {					//.h file for class declaration

	private:
		int seconds;
		int minutes;
		int hours;
	public:
		Time();
		~Time();
		Time(int s, int m, int h);
		void setSeconds(int s);
		void setMinutes(int m);
		void setHour(int h);
		int getSeconds();
		int getMinutes();
		int getHour();


};
