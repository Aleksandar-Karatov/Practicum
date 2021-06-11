#pragma once
#include<iostream>

class MusicPiece
{
public:

	virtual MusicPiece* addSong();
	virtual MusicPiece* mergePieces(MusicPiece* other);
	virtual MusicPiece* takeOutSongs(MusicPiece* other);
	virtual int getType() = 0;
	virtual bool equals(MusicPiece* other) = 0;
	virtual MusicPiece* clone() = 0;
	virtual ~MusicPiece();
	virtual void print() = 0;
protected:
	int Songs;
};

