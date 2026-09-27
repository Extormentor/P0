class RoboticArm {
	private:
		double x, y, z;
		bool sujeto;
	public:
		RoboticArm();
		void get_x();
		void get_y();
		void get_z();
		bool sujetado();
		void grab();
		void release();
		void move(double x, double y, double z);
};
