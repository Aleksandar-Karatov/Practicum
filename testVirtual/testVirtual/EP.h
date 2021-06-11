#pragma once
#include"MusicPiece.h"

class EP : public MusicPiece
{
public:
	virtual void print();
	EP();
	EP(int songs);
	MusicPiece* addSong();
	MusicPiece* mergePieces(MusicPiece* other);
	MusicPiece* takeOutSongs(MusicPiece* other);
	int getType();
	bool equals(MusicPiece* other);
	virtual MusicPiece* clone();
	~EP();
private:

};
