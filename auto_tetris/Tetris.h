#pragma once
#ifndef TETRIS_CLASS
#define TETRIS_CLASS

#include"GridPosition.h"
/*
* �ࣺ ����˹����ͼ��
*/
class GridPosition;

class Tetris
{
public:
	GridPosition positions[4];
	int color;
	int key; // �ؼ����±�,Ϊ������������ת

	Tetris();
	// ���ÿɱ��������ͼ�Σ�����9��BYTE���Ͳ�������ʾ4��������ؼ����±�
	Tetris(int key, ...);
	~Tetris();
	// ����
	Tetris & operator = (const Tetris & tetris);
	// �ƶ�����x
	void changeX(int step);
	// �ƶ�����y
	void changeY(int step);
	// ���ͼ�ε������СX��Y
	void getMaxMin(int & minX, int & maxX, int & minY, int & maxY);
	// ��ȡ�����½ǵ�Ԫ���±�
	int getLeftBottom();
	// ˳ʱ����ת90��, ���ݱ߽緶Χ��ת��ɺ����е���ͼ��λ��
	void rotate(int min_x, int max_x, int min_y, int max_y);
	void rotate();
	// �����ƶ�
	void down();
	// �����ƶ�
	void left();
	// �����ƶ�
	void right();

	// �����ֵ
	void random();
	// �����±��ȡ��ˢ
	friend HBRUSH getHbrush(int);
};
#endif // !TETRIS_CLASS

