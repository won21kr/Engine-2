#include "ResourceGroup.h"

//----------------------------------------------------------------------------------------------------------------------------***************************
//-----------------------------------------PUBLIC-----------------------------------------------------------------------------***************************
//----------------------------------------------------------------------------------------------------------------------------***************************



/*------------------------------------------------------------------------------------
-------------------------------Constructor--------------------------------------------
------------------------------------------------------------------------------------*/
ResourceGroup::ResourceGroup()												//Constructor is empty	
{
	setVectorSize(3);
}



//----------------------------------------------------------------------------------------------------------------------------***************************


/*------------------------------------------------------------------------------------
-------------------------------addTexture---------------------------------------------
------------------------------------------------------------------------------------*/
void ResourceGroup::addTexture(sf::Texture* ftexture)						//add a pointer to a texture to textureVector
{

	textureVector.push_back(ftexture);
	addName(textureVector.size() - 1, Texture_Vector, textureVector.size() - 1);

}

/*------------------------------------------------------------------------------------
-------------------------------addTexture---------------------------------------------
------------------------------------------------------------------------------------*/
void ResourceGroup::addTexture(sf::Texture* ftexture, std::string fname)						//add a pointer to a texture to textureVector
{

	textureVector.push_back(ftexture);
	addName(fname, Texture_Vector, textureVector.size() - 1);

}

//----------------------------------------------------------------------------------------------------------------------------***************************


/*------------------------------------------------------------------------------------
-------------------------------addFont------------------------------------------------
------------------------------------------------------------------------------------*/
void ResourceGroup::addFont(sf::Font* ffont)								//add a pointer to a font to fontVector
{

	fontVector.push_back(ffont);
	addName(fontVector.size() - 1, Font_Vector, fontVector.size() - 1);

}


/*------------------------------------------------------------------------------------
-------------------------------addFont------------------------------------------------
------------------------------------------------------------------------------------*/
void ResourceGroup::addFont(sf::Font* ffont, std::string fname)								//add a pointer to a font to fontVector
{

	fontVector.push_back(ffont);
	addName(fname, Font_Vector, fontVector.size() - 1);


}



//----------------------------------------------------------------------------------------------------------------------------***************************


/*------------------------------------------------------------------------------------
-----------------------------addSoundBuf----------------------------------------------
------------------------------------------------------------------------------------*/
/*void addSoundBuf(sf::SoundBuffer* fsoundbuf)								//add a pointer to a soundBuf to soundBufVector
{

	soundBufVector.push_back(fsoundbuf);


}*/



//----------------------------------------------------------------------------------------------------------------------------***************************


/*------------------------------------------------------------------------------------
-------------------------------getTextureVector---------------------------------------
------------------------------------------------------------------------------------*/
std::vector<sf::Texture*> ResourceGroup::getTextureVector()					//returns the entire textureVector; probably not going to use
{

	return textureVector;

}



//----------------------------------------------------------------------------------------------------------------------------***************************


/*------------------------------------------------------------------------------------
-------------------------------getFontVector------------------------------------------
------------------------------------------------------------------------------------*/
std::vector<sf::Font*> ResourceGroup::getFontVector()						//returns the entire fontVector; probably not going to use
{

	return fontVector;

}



//----------------------------------------------------------------------------------------------------------------------------***************************


/*------------------------------------------------------------------------------------
-------------------------------getSoundBufVector--------------------------------------
------------------------------------------------------------------------------------*/
/*std::vector<sf::SoundBuffer*> ResourceGroup::getSoundBufVector()			//returns the entire soundBufVector; probably not going to use
{

	return soundBufVector;

}*/



//----------------------------------------------------------------------------------------------------------------------------***************************


/*------------------------------------------------------------------------------------
-------------------------------getTexturePointer--------------------------------------
------------------------------------------------------------------------------------*/
sf::Texture* ResourceGroup::getTexturePointer(int findex)					//returns an element of textureVector -- a pointer to a texture
{

	return textureVector[findex];

}


/*------------------------------------------------------------------------------------
-------------------------------getTexturePointer--------------------------------------
------------------------------------------------------------------------------------*/
sf::Texture* ResourceGroup::getTexturePointer(std::string fname)					//returns an element of textureVector -- a pointer to a texture
{

	return textureVector[ntoi(fname, Texture_Vector)];

}

//----------------------------------------------------------------------------------------------------------------------------***************************


/*------------------------------------------------------------------------------------
-------------------------------getFontPointer-----------------------------------------
------------------------------------------------------------------------------------*/
sf::Font* ResourceGroup::getFontPointer(int findex)							//returns an element of fontVector -- a pointer to a font
{

	return fontVector[findex];

}

/*------------------------------------------------------------------------------------
-------------------------------getFontPointer-----------------------------------------
------------------------------------------------------------------------------------*/
sf::Font* ResourceGroup::getFontPointer(std::string fname)							//returns an element of fontVector -- a pointer to a font
{

	return fontVector[ntoi(fname, Texture_Vector)];

}


//----------------------------------------------------------------------------------------------------------------------------***************************


/*------------------------------------------------------------------------------------
-------------------------------getSoundBufPointer-------------------------------------
------------------------------------------------------------------------------------*/
/*sf::SoundBuffer* getSoundBufPointer(int findex)							//returns an element of soundBufVector -- a pointer to a soundBuffer
{

	return soundBufVector[findex];

}*/

//----------------------------------------------------------------------------------------------------------------------------***************************