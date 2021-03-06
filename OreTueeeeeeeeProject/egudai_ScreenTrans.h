#pragma once

extern const int WIN_WIDTH;
extern const int WIN_HEIGHT;

class ScreenTrans
{
private:
	int graph; //描画された物の保存

	int size; //分割した時の画像の大きさ(正方形)
	double exRota; //拡大率

	int mode;

	bool isEnd;

	void Updata(void);

public:
	enum Mode
	{
		In,
		Out
	};

	ScreenTrans(void);

	void Init(int size, int mode);
	void Draw(void);

	bool GetFlag(void);
};
