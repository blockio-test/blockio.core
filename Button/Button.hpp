class Button {
private:
	int _port;
public:
	Button(int port = -1) {
		_port = port;
		pinMode(_port, INPUT);
	}
	bool getValue() {
		return digitalRead(_port);
	}
};