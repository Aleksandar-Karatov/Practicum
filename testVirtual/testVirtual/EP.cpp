#include <iostream>
#include <assert.h>
#include "EP.h"
#include <map>
#include <string>
#include <math.h>
EP::EP()
{
	Songs = 0;
}
EP::EP(int songs)
{
	Songs = songs;
}
void EP::print()
{
	std::cout << Songs << std::endl;
}
MusicPiece* EP::addSong()
{
	return new EP(Songs + 1);
}
MusicPiece* EP::mergePieces(MusicPiece* other)
{
	assert(other->getType() == 1);
	return new EP(Songs + ((EP*)other)->Songs);

}
MusicPiece* EP::takeOutSongs(MusicPiece* other)
{
	assert(other->getType() == 1);
	return new EP(Songs - ((EP*)other)->Songs);
}
int EP::getType()
{
	return 1;
}

bool EP::equals(MusicPiece* other)
{
	return other->getType() == 1 && Songs == ((EP*)other)->Songs;
}
MusicPiece* EP::clone()
{
	return new EP(Songs);
}
EP::~EP()
{}