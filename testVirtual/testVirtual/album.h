#pragma once
#include"MusicPiece.h"
#define INT_VALUE 0;

class Album : public MusicPiece
{
public:
	virtual void print();
	Album();
	Album(int songs);
	MusicPiece* addSong();
	 MusicPiece* mergePieces(MusicPiece* other);
	 MusicPiece* takeOutSongs(MusicPiece* other);
	 int getType();
	 bool equals(MusicPiece* other);
	 virtual MusicPiece* clone();
	~Album();
private:

};
