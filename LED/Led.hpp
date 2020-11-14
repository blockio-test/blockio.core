class Led {
private:
	int _port;
public:
	Led(int port) {
		_port = port;
		pinMode(_port, OUTPUT);
	}

	void setValue(bool state) {
		return digitalWrite(_port, state);
	}
};