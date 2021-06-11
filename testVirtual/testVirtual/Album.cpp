#include <iostream>
#include <assert.h>
#include "Album.h"
#include <map>
#include <string>
#include <math.h>
Album:: Album()
{
	Songs = 0;
}
Album::Album(int songs)
{
	Songs = songs;
}
void Album::print()
{
	std::cout << Songs << std::endl;
}
MusicPiece* Album:: addSong()
{
	return new Album(Songs + 1);
}
MusicPiece* Album:: mergePieces(MusicPiece* other)
{
	assert(other->getType() == 0);
	return new Album(Songs + ((Album*)other)->Songs);

}
MusicPiece* Album::takeOutSongs(MusicPiece* other)
{
	assert(other->getType() == 0);
	return new Album(Songs - ((Album*)other)->Songs);
}
int Album:: getType()
{
	return 0;
}

bool Album:: equals(MusicPiece* other)
{
	return other->getType() == 0 && Songs == ((Album*)other)->Songs;
}
MusicPiece* Album::clone()
{
	return new Album(Songs);
}
Album::~Album()
{}