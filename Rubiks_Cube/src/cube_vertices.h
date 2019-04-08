
#ifndef CUBE_VERTICES_H
#define CUBE_VERTICES_H

float outline = 0.005f;
unsigned int i = 36;

float positions[6][3][3][8*4] = {
	{	//x							//y					//z				//texture coords			//colour						//FRONT BLUE FACE
		{
	{-(0.3f + outline)		  , (0.3f + outline)  , 0.3f + outline ,	1.0f, 1.0f,				0.1, 0.67f, 1.0f,					//up left
	-(0.1f + outline)		  , (0.3f + outline)  , 0.3f + outline ,	1.0f, 0.0f,				0.1, 0.67f, 1.0f,					//
	-(0.1f + outline)		  , (0.1f + outline)  , 0.3f + outline ,	0.0f, 0.0f,				0.1, 0.67f, 1.0f,					//
	-(0.3f + outline)		  , (0.1f + outline)  , 0.3f + outline ,	0.0f, 1.0f,				0.1, 0.67f, 1.0f,},					//
	{-0.1f					  , (0.3f + outline)  , 0.3f + outline ,	1.0f, 1.0f,				0.1, 0.67f, 1.0f,					//up
	 0.1f					  , (0.3f + outline)  , 0.3f + outline ,	1.0f, 0.0f,				0.1, 0.67f, 1.0f,					//
	 0.1f					  , (0.1f + outline)  , 0.3f + outline ,	0.0f, 0.0f,				0.1, 0.67f, 1.0f,					//
	-0.1f					  , (0.1f + outline)  , 0.3f + outline ,	0.0f, 1.0f,				0.1, 0.67f, 1.0f,},					//
	{(0.1f + outline)		  , (0.3f + outline)  , 0.3f + outline ,	1.0f, 1.0f,				0.1, 0.67f, 1.0f,					//up right
	(0.3f + outline)		  , (0.3f + outline)  , 0.3f + outline ,	1.0f, 0.0f,				0.1, 0.67f, 1.0f,					//
	(0.3f + outline)		  , (0.1f + outline)  , 0.3f + outline ,	0.0f, 0.0f,				0.1, 0.67f, 1.0f,					//
	(0.1f + outline)		  , (0.1f + outline)  , 0.3f + outline ,	0.0f, 1.0f,				0.1, 0.67f, 1.0f,},
	},
{
	{ -(0.3f + outline)		  , 0.1f			  , 0.3f + outline ,	1.0f, 1.0f,				0.1, 0.67f, 1.0f,					//left
   -(0.1f + outline)		  , 0.1f			  , 0.3f + outline ,	1.0f, 0.0f,				0.1, 0.67f, 1.0f,					//
   -(0.1f + outline)		  ,-0.1f			  , 0.3f + outline ,	0.0f, 0.0f,				0.1, 0.67f, 1.0f,					//
   -(0.3f + outline)		  ,-0.1f			  , 0.3f + outline ,	0.0f, 1.0f,				0.1, 0.67f, 1.0f,},					//
	{-0.1f					  ,	0.1f			  , 0.3f + outline ,	1.0f, 1.0f,				0.1, 0.67f, 1.0f,					//centre
	 0.1f					  ,	0.1f			  , 0.3f + outline ,	1.0f, 0.0f,				0.1, 0.67f, 1.0f,					//
	 0.1f					  ,	-0.1f			  , 0.3f + outline ,	0.0f, 0.0f,				0.1, 0.67f, 1.0f,					//
	-0.1f					  ,	-0.1f			  , 0.3f + outline ,	0.0f, 1.0f,				0.1, 0.67f, 1.0f,},					//
	{(0.1f + outline)		  , 0.1f			  , 0.3f + outline ,	1.0f, 1.0f,				0.1, 0.67f, 1.0f,					//right
	(0.3f + outline)		  , 0.1f			  , 0.3f + outline ,	1.0f, 0.0f,				0.1, 0.67f, 1.0f,					//
	(0.3f + outline)		  ,-0.1f			  , 0.3f + outline ,	0.0f, 0.0f,				0.1, 0.67f, 1.0f,					//
	(0.1f + outline)		  ,-0.1f			  , 0.3f + outline ,	0.0f, 1.0f,				0.1, 0.67f, 1.0f,},	
},
{
	{-(0.3f + outline)		  , -(0.1f + outline) , 0.3f + outline ,	1.0f, 1.0f,				0.1, 0.67f, 1.0f,					//down left
	-(0.1f + outline)		  , -(0.1f + outline) , 0.3f + outline ,	1.0f, 0.0f,				0.1, 0.67f, 1.0f,					//
	-(0.1f + outline)		  , -(0.3f + outline) , 0.3f + outline ,	0.0f, 0.0f,				0.1, 0.67f, 1.0f,					//
	-(0.3f + outline)		  , -(0.3f + outline) , 0.3f + outline ,	0.0f, 1.0f,				0.1, 0.67f, 1.0f,},					//
	{-0.1f					  , -(0.1f + outline) , 0.3f + outline ,	1.0f, 1.0f,				0.1, 0.67f, 1.0f,					//down
	 0.1f					  , -(0.1f + outline) , 0.3f + outline ,	1.0f, 0.0f,				0.1, 0.67f, 1.0f,					//
	 0.1f					  , -(0.3f + outline) , 0.3f + outline ,	0.0f, 0.0f,				0.1, 0.67f, 1.0f,					//
	-0.1f					  , -(0.3f + outline) , 0.3f + outline ,	0.0f, 1.0f,				0.1, 0.67f, 1.0f,},					//
	{(0.1f + outline)		  , -(0.1f + outline) , 0.3f + outline ,	1.0f, 1.0f,				0.1, 0.67f, 1.0f,					//down right
	(0.3f + outline)		  , -(0.1f + outline) , 0.3f + outline ,	1.0f, 0.0f,				0.1, 0.67f, 1.0f,					//
	(0.3f + outline)		  , -(0.3f + outline) , 0.3f + outline ,	0.0f, 0.0f,				0.1, 0.67f, 1.0f,					//
	(0.1f + outline)		  , -(0.3f + outline) , 0.3f + outline ,	0.0f, 1.0f,				0.1, 0.67f, 1.0f,},	}				//
},
{					//x							//y					//z				//texture coords			//colour			// LEFTWHITE FACE
	{
		{-(0.3f + outline)		,	(0.1f + outline)		 , (0.3f + outline)   , 	1.0f, 1.0f,				1.0f, 1.0f	,1.0f	,		//up right
-(0.3f + outline)		,	(0.3f + outline)		 , (0.3f + outline)   , 	1.0f, 0.0f,				1.0f, 1.0f	,1.0f	,		//
-(0.3f + outline)		,	(0.3f + outline)		 , (0.1f + outline)   , 	0.0f, 0.0f,				1.0f, 1.0f	,1.0f	,		//
-(0.3f + outline)		,	(0.1f + outline)		 , (0.1f + outline)   , 	0.0f, 1.0f,				1.0f, 1.0f	,1.0f	,	},		//
{-(0.3f + outline)		,	-0.1f					 , (0.3f + outline)   , 	1.0f, 1.0f,				1.0f, 1.0f	,1.0f	,		//up
-(0.3f + outline)		,	 0.1f					 , (0.3f + outline)   , 	1.0f, 0.0f,				1.0f, 1.0f	,1.0f	,		//
-(0.3f + outline)		,	 0.1f					 , (0.1f + outline)   , 	0.0f, 0.0f,				1.0f, 1.0f	,1.0f	,		//
-(0.3f + outline)		,	-0.1f					 , (0.1f + outline)   , 	0.0f, 1.0f,				1.0f, 1.0f	,1.0f	,	},		//
{-(0.3f + outline)		,	-(0.3f + outline)		 , (0.3f + outline)   , 	1.0f, 1.0f,				1.0f, 1.0f	,1.0f	,		//up left
-(0.3f + outline)		,	-(0.1f + outline)		 , (0.3f + outline)   , 	1.0f, 0.0f,				1.0f, 1.0f	,1.0f	,		//
-(0.3f + outline)		,	-(0.1f + outline)		 , (0.1f + outline)   , 	0.0f, 0.0f,				1.0f, 1.0f	,1.0f	,		//
-(0.3f + outline)		,	-(0.3f + outline)		 , (0.1f + outline)   , 	0.0f, 1.0f,				1.0f, 1.0f	,1.0f	,	},
	},
	{
{-(0.3f + outline)		,	(0.1f + outline)		 , 0.1f			   , 	1.0f, 1.0f,					1.0f, 1.0f	,1.0f	,		//right
-(0.3f + outline)		,	(0.3f + outline)		 , 0.1f			   , 	1.0f, 0.0f,					1.0f, 1.0f	,1.0f	,		//
-(0.3f + outline)		,	(0.3f + outline)		 ,-0.1f			   , 	0.0f, 0.0f,					1.0f, 1.0f	,1.0f	,		//
-(0.3f + outline)		,	(0.1f + outline)		 ,-0.1f			   , 	0.0f, 1.0f,					1.0f, 1.0f	,1.0f	,	},		//
{-(0.3f + outline)		,	-0.1f					 ,	0.1f			   , 	1.0f, 1.0f,				1.0f, 1.0f	,1.0f	,		//centre
-(0.3f + outline)		,	 0.1f					 ,	0.1f			   , 	1.0f, 0.0f,				1.0f, 1.0f	,1.0f	,		//
-(0.3f + outline)		,	 0.1f					 ,	-0.1f			   , 	0.0f, 0.0f,				1.0f, 1.0f	,1.0f	,		//
-(0.3f + outline)		,	-0.1f					 ,	-0.1f			   , 	0.0f, 1.0f,				1.0f, 1.0f	,1.0f	,	},		//
{-(0.3f + outline)		,   -(0.3f + outline)		 , 0.1f			   , 	1.0f, 1.0f,					1.0f, 1.0f	,1.0f	,		//left
-(0.3f + outline)		,   -(0.1f + outline)		 , 0.1f			   , 	1.0f, 0.0f,					1.0f, 1.0f	,1.0f	,		//
-(0.3f + outline)		,   -(0.1f + outline)		 ,-0.1f			   , 	0.0f, 0.0f,					1.0f, 1.0f	,1.0f	,		//
-(0.3f + outline)		,   -(0.3f + outline)		 ,-0.1f			   , 	0.0f, 1.0f,					1.0f, 1.0f	,1.0f	,	},
},
{
{-(0.3f + outline)		,	(0.1f + outline)		 , -(0.1f + outline)  , 	1.0f, 1.0f,				1.0f, 1.0f	,1.0f	,		//down right
-(0.3f + outline)		,	(0.3f + outline)		 , -(0.1f + outline)  , 	1.0f, 0.0f,				1.0f, 1.0f	,1.0f	,		//
-(0.3f + outline)		,	(0.3f + outline)		 , -(0.3f + outline)  , 	0.0f, 0.0f,				1.0f, 1.0f	,1.0f	,		//
-(0.3f + outline)		,	(0.1f + outline)		 , -(0.3f + outline)  , 	0.0f, 1.0f,				1.0f, 1.0f	,1.0f	,	},		//
{-(0.3f + outline)		,	-0.1f					 , -(0.1f + outline)  , 	1.0f, 1.0f,				1.0f, 1.0f	,1.0f	,		//down
-(0.3f + outline)		,	 0.1f					 , -(0.1f + outline)  , 	1.0f, 0.0f,				1.0f, 1.0f	,1.0f	,		//
-(0.3f + outline)		,	 0.1f					 , -(0.3f + outline)  , 	0.0f, 0.0f,				1.0f, 1.0f	,1.0f	,		//
-(0.3f + outline)		,	-0.1f					 , -(0.3f + outline)  , 	0.0f, 1.0f,				1.0f, 1.0f	,1.0f	,	},		//
{-(0.3f + outline)		,	-(0.3f + outline)		 , -(0.1f + outline)  , 	1.0f, 1.0f,				1.0f, 1.0f	,1.0f	,		//down left
-(0.3f + outline)		,	-(0.1f + outline)		 , -(0.1f + outline)  , 	1.0f, 0.0f,				1.0f, 1.0f	,1.0f	,		//
-(0.3f + outline)		,	-(0.1f + outline)		 , -(0.3f + outline)  , 	0.0f, 0.0f,				1.0f, 1.0f	,1.0f	,		//
-(0.3f + outline)		,	-(0.3f + outline)		 , -(0.3f + outline)  , 	0.0f, 1.0f,				1.0f, 1.0f	,1.0f	,	},
}		//
},

{				//x							//y					//z				//texture coords			//colour					//DOWN  RED FACE
	{
		{	-(0.3f + outline)		 ,-(0.3f + outline) , (0.3f + outline)   , 	1.0f, 1.0f,				1.0f, 0.1f, 0.15f,			//up left
	-(0.1f + outline)		 ,-(0.3f + outline) , (0.3f + outline)   , 	1.0f, 0.0f,				1.0f, 0.1f, 0.15f,			//
	-(0.1f + outline)		 ,-(0.3f + outline) , (0.1f + outline)   , 	0.0f, 0.0f,				1.0f, 0.1f, 0.15f,			//
	-(0.3f + outline)		 ,-(0.3f + outline) , (0.1f + outline)   , 	0.0f, 1.0f,				1.0f, 0.1f, 0.15f,	},			//
{	-0.1f					 ,-(0.3f + outline) , (0.3f + outline)   , 	1.0f, 1.0f,				1.0f, 0.1f, 0.15f,			//up
	 0.1f					 ,-(0.3f + outline) , (0.3f + outline)   , 	1.0f, 0.0f,				1.0f, 0.1f, 0.15f,			//
	 0.1f					 ,-(0.3f + outline) , (0.1f + outline)   , 	0.0f, 0.0f,				1.0f, 0.1f, 0.15f,			//
	-0.1f					 ,-(0.3f + outline) , (0.1f + outline)   , 	0.0f, 1.0f,				1.0f, 0.1f, 0.15f,		},		//
{	(0.1f + outline)		 ,-(0.3f + outline) , (0.3f + outline)   , 	1.0f, 1.0f,				1.0f, 0.1f, 0.15f,			//up right
	(0.3f + outline)		 ,-(0.3f + outline) , (0.3f + outline)   , 	1.0f, 0.0f,				1.0f, 0.1f, 0.15f,			//
	(0.3f + outline)		 ,-(0.3f + outline) , (0.1f + outline)   , 	0.0f, 0.0f,				1.0f, 0.1f, 0.15f,			//
	(0.1f + outline)		 ,-(0.3f + outline) , (0.1f + outline)   , 	0.0f, 1.0f,				1.0f, 0.1f, 0.15f,		},
	},
	{//
{	   -(0.3f + outline)		 ,-(0.3f + outline) , 0.1f			   , 	1.0f, 1.0f,				1.0f, 0.1f, 0.15f,				//left
   -(0.1f + outline)		 ,-(0.3f + outline) , 0.1f			   , 	1.0f, 0.0f,				1.0f, 0.1f, 0.15f,				//
   -(0.1f + outline)		 ,-(0.3f + outline) ,-0.1f			   , 	0.0f, 0.0f,				1.0f, 0.1f, 0.15f,				//
   -(0.3f + outline)		 ,-(0.3f + outline) ,-0.1f			   , 	0.0f, 1.0f,				1.0f, 0.1f, 0.15f,		},			//
{	-0.1f					 ,-(0.3f + outline) ,	0.1f			   , 	1.0f, 1.0f,			1.0f, 0.1f, 0.15f,				//centre
	 0.1f					 ,-(0.3f + outline) ,	0.1f			   , 	1.0f, 0.0f,			1.0f, 0.1f, 0.15f,				//
	 0.1f					 ,-(0.3f + outline) ,	-0.1f			   , 	0.0f, 0.0f,			1.0f, 0.1f, 0.15f,				//
	-0.1f					 ,-(0.3f + outline) ,	-0.1f			   , 	0.0f, 1.0f,			1.0f, 0.1f, 0.15f,			},		//
{		(0.1f + outline)		 ,-(0.3f + outline) , 0.1f			   , 	1.0f, 1.0f,				1.0f, 0.1f, 0.15f,				//right
	(0.3f + outline)		 ,-(0.3f + outline) , 0.1f			   , 	1.0f, 0.0f,				1.0f, 0.1f, 0.15f,				//
	(0.3f + outline)		 ,-(0.3f + outline) ,-0.1f			   , 	0.0f, 0.0f,				1.0f, 0.1f, 0.15f,				//
	(0.1f + outline)		 ,-(0.3f + outline) ,-0.1f			   , 	0.0f, 1.0f,				1.0f, 0.1f, 0.15f,			},
	},
	{//
	{	-(0.3f + outline)		 ,-(0.3f + outline) , -(0.1f + outline)  , 	1.0f, 1.0f,				1.0f, 0.1f, 0.15f,			//down left
	-(0.1f + outline)		 ,-(0.3f + outline) , -(0.1f + outline)  , 	1.0f, 0.0f,				1.0f, 0.1f, 0.15f,			//
	-(0.1f + outline)		 ,-(0.3f + outline) , -(0.3f + outline)  , 	0.0f, 0.0f,				1.0f, 0.1f, 0.15f,			//
	-(0.3f + outline)		 ,-(0.3f + outline) , -(0.3f + outline)  , 	0.0f, 1.0f,				1.0f, 0.1f, 0.15f,		},		//
	 {	-0.1f					 ,-(0.3f + outline) , -(0.1f + outline)  , 	1.0f, 1.0f,				1.0f, 0.1f, 0.15f,			//down
	 0.1f					 ,-(0.3f + outline) , -(0.1f + outline)  , 	1.0f, 0.0f,				1.0f, 0.1f, 0.15f,			//
	 0.1f					 ,-(0.3f + outline) , -(0.3f + outline)  , 	0.0f, 0.0f,				1.0f, 0.1f, 0.15f,			//
	-0.1f					 ,-(0.3f + outline) , -(0.3f + outline)  , 	0.0f, 1.0f,				1.0f, 0.1f, 0.15f,		},		//
{	(0.1f + outline)		 ,-(0.3f + outline) , -(0.1f + outline)  , 	1.0f, 1.0f,				1.0f, 0.1f, 0.15f,			//down right
	(0.3f + outline)		 ,-(0.3f + outline) , -(0.1f + outline)  , 	1.0f, 0.0f,				1.0f, 0.1f, 0.15f,			//
	(0.3f + outline)		 ,-(0.3f + outline) , -(0.3f + outline)  , 	0.0f, 0.0f,				1.0f, 0.1f, 0.15f,			//
	(0.1f + outline)		 ,-(0.3f + outline) , -(0.3f + outline)  , 	0.0f, 1.0f,				1.0f, 0.1f, 0.15f,		},
	}		//
},

{	//x							//y					//z				//texture coords			//colour					//RIGHT YELLOW FACE
	{
		{0.3f + outline ,	-0.1f					 ,	0.1f			   , 	1.0f, 1.0f,				1.0f, 1.0f, 0.6f,			//centre
	0.3f + outline ,	 0.1f					 ,	0.1f			   , 	1.0f, 0.0f,				1.0f, 1.0f, 0.6f,			//
	0.3f + outline ,	 0.1f					 ,	-0.1f			   , 	0.0f, 0.0f,				1.0f, 1.0f, 0.6f,			//
	0.3f + outline ,	-0.1f					 ,	-0.1f			   , 	0.0f, 1.0f,				1.0f, 1.0f, 0.6f, },			//
	{	0.3f + outline ,   -(0.3f + outline)		 , 0.1f			   , 	1.0f, 1.0f,					1.0f, 1.0f, 0.6f,			//left
	0.3f + outline ,   -(0.1f + outline)		 , 0.1f			   , 	1.0f, 0.0f,					1.0f, 1.0f, 0.6f,			//
	0.3f + outline ,   -(0.1f + outline)		 ,-0.1f			   , 	0.0f, 0.0f,					1.0f, 1.0f, 0.6f,			//
	0.3f + outline ,   -(0.3f + outline)		 ,-0.1f			   , 	0.0f, 1.0f,					1.0f, 1.0f, 0.6f, },			//
	{	0.3f + outline ,	(0.1f + outline)		 , 0.1f			   , 	1.0f, 1.0f,					1.0f, 1.0f, 0.6f,			//right
	0.3f + outline ,	(0.3f + outline)		 , 0.1f			   , 	1.0f, 0.0f,					1.0f, 1.0f, 0.6f,			//
	0.3f + outline ,	(0.3f + outline)		 ,-0.1f			   , 	0.0f, 0.0f,					1.0f, 1.0f, 0.6f,			//
	0.3f + outline ,	(0.1f + outline)		 ,-0.1f			   , 	0.0f, 1.0f,					1.0f, 1.0f, 0.6f, },
	},
	{//
	{0.3f + outline ,	-0.1f					 , -(0.1f + outline)  , 	1.0f, 1.0f,				1.0f, 1.0f, 0.6f,			//down
	0.3f + outline ,	 0.1f					 , -(0.1f + outline)  , 	1.0f, 0.0f,				1.0f, 1.0f, 0.6f,			//
	0.3f + outline ,	 0.1f					 , -(0.3f + outline)  , 	0.0f, 0.0f,				1.0f, 1.0f, 0.6f,			//
	0.3f + outline ,	-0.1f					 , -(0.3f + outline)  , 	0.0f, 1.0f,				1.0f, 1.0f, 0.6f, },		//
	{0.3f + outline ,	-0.1f					 , (0.3f + outline)   , 	1.0f, 1.0f,				1.0f, 1.0f, 0.6f,			//up
	0.3f + outline ,	 0.1f					 , (0.3f + outline)   , 	1.0f, 0.0f,				1.0f, 1.0f, 0.6f,			//
	0.3f + outline ,	 0.1f					 , (0.1f + outline)   , 	0.0f, 0.0f,				1.0f, 1.0f, 0.6f,			//
	0.3f + outline ,	-0.1f					 , (0.1f + outline)   , 	0.0f, 1.0f,				1.0f, 1.0f, 0.6f, },			//
{0.3f + outline ,	-(0.3f + outline)		 , (0.3f + outline)   , 	1.0f, 1.0f,				1.0f, 1.0f, 0.6f,			//up left
	0.3f + outline ,	-(0.1f + outline)		 , (0.3f + outline)   , 	1.0f, 0.0f,				1.0f, 1.0f, 0.6f,			//
	0.3f + outline ,	-(0.1f + outline)		 , (0.1f + outline)   , 	0.0f, 0.0f,				1.0f, 1.0f, 0.6f,			//
	0.3f + outline ,	-(0.3f + outline)		 , (0.1f + outline)   , 	0.0f, 1.0f,				1.0f, 1.0f, 0.6f, },
	},
	{//
{	0.3f + outline ,	(0.1f + outline)		 , (0.3f + outline)   , 	1.0f, 1.0f,				1.0f, 1.0f, 0.6f,			//up right
	0.3f + outline ,	(0.3f + outline)		 , (0.3f + outline)   , 	1.0f, 0.0f,				1.0f, 1.0f, 0.6f,			//
	0.3f + outline ,	(0.3f + outline)		 , (0.1f + outline)   , 	0.0f, 0.0f,				1.0f, 1.0f, 0.6f,			//
	0.3f + outline ,	(0.1f + outline)		 , (0.1f + outline)   , 	0.0f, 1.0f,				1.0f, 1.0f, 0.6f, },			//
{	0.3f + outline ,	-(0.3f + outline)		 , -(0.1f + outline)  , 	1.0f, 1.0f,				1.0f, 1.0f, 0.6f,			//down left
	0.3f + outline ,	-(0.1f + outline)		 , -(0.1f + outline)  , 	1.0f, 0.0f,				1.0f, 1.0f, 0.6f,			//
	0.3f + outline ,	-(0.1f + outline)		 , -(0.3f + outline)  , 	0.0f, 0.0f,				1.0f, 1.0f, 0.6f,			//
	0.3f + outline ,	-(0.3f + outline)		 , -(0.3f + outline)  , 	0.0f, 1.0f,				1.0f, 1.0f, 0.6f, },			//
{	0.3f + outline ,	(0.1f + outline)		 , -(0.1f + outline)  , 	1.0f, 1.0f,				1.0f, 1.0f, 0.6f,			//down right
	0.3f + outline ,	(0.3f + outline)		 , -(0.1f + outline)  , 	1.0f, 0.0f,				1.0f, 1.0f, 0.6f,			//
	0.3f + outline ,	(0.3f + outline)		 , -(0.3f + outline)  , 	0.0f, 0.0f,				1.0f, 1.0f, 0.6f,			//
	0.3f + outline ,	(0.1f + outline)		 , -(0.3f + outline)  , 	0.0f, 1.0f,				1.0f, 1.0f, 0.6f, },
	}//
},

{		//x							//y					//z				//texture coords		//Color							//BACK GREEN FACE
	{
		{	-0.1f					  ,	0.1f			  ,-(0.3f + outline) ,	1.0f, 1.0f,				0.49f, 1.0f, 0.39f,					//centre
	 0.1f					  ,	0.1f			  ,-(0.3f + outline) ,	1.0f, 0.0f,				0.49f, 1.0f, 0.39f,					//
	 0.1f					  ,	-0.1f			  ,-(0.3f + outline) ,	0.0f, 0.0f,				0.49f, 1.0f, 0.39f,					//
	-0.1f					  ,	-0.1f			  ,-(0.3f + outline) ,	0.0f, 1.0f,				0.49f, 1.0f, 0.39f, },			//
{-(0.3f + outline)		  , 0.1f			  ,-(0.3f + outline) ,	1.0f, 1.0f,				0.49f, 1.0f, 0.39f,					//left
   -(0.1f + outline)		  , 0.1f			  ,-(0.3f + outline) ,	1.0f, 0.0f,				0.49f, 1.0f, 0.39f,					//
   -(0.1f + outline)		  ,-0.1f			  ,-(0.3f + outline) ,	0.0f, 0.0f,				0.49f, 1.0f, 0.39f,					//
   -(0.3f + outline)		  ,-0.1f			  ,-(0.3f + outline) ,	0.0f, 1.0f,				0.49f, 1.0f, 0.39f, },			//
{	(0.1f + outline)		  , 0.1f			  ,-(0.3f + outline) ,	1.0f, 1.0f,				0.49f, 1.0f, 0.39f,					//right
	(0.3f + outline)		  , 0.1f			  ,-(0.3f + outline) ,	1.0f, 0.0f,				0.49f, 1.0f, 0.39f,					//
	(0.3f + outline)		  ,-0.1f			  ,-(0.3f + outline) ,	0.0f, 0.0f,				0.49f, 1.0f, 0.39f,					//
	(0.1f + outline)		  ,-0.1f			  ,-(0.3f + outline) ,	0.0f, 1.0f,				0.49f, 1.0f, 0.39f, },
	},
	{//
{	-0.1f					  , -(0.1f + outline) ,-(0.3f + outline) ,	1.0f, 1.0f,				0.49f, 1.0f, 0.39f,					//down
	 0.1f					  , -(0.1f + outline) ,-(0.3f + outline) ,	1.0f, 0.0f,				0.49f, 1.0f, 0.39f,					//
	 0.1f					  , -(0.3f + outline) ,-(0.3f + outline) ,	0.0f, 0.0f,				0.49f, 1.0f, 0.39f,					//
	-0.1f					  , -(0.3f + outline) ,-(0.3f + outline) ,	0.0f, 1.0f,				0.49f, 1.0f, 0.39f, },			//
{	-0.1f					  , (0.3f + outline)  ,-(0.3f + outline) ,	1.0f, 1.0f,				0.49f, 1.0f, 0.39f,					//up
	 0.1f					  , (0.3f + outline)  ,-(0.3f + outline) ,	1.0f, 0.0f,				0.49f, 1.0f, 0.39f,					//
	 0.1f					  , (0.1f + outline)  ,-(0.3f + outline) ,	0.0f, 0.0f,				0.49f, 1.0f, 0.39f,					//
	-0.1f					  , (0.1f + outline)  ,-(0.3f + outline) ,	0.0f, 1.0f,				0.49f, 1.0f, 0.39f, },				//
	{	-(0.3f + outline)		  , (0.3f + outline)  ,-(0.3f + outline) ,	1.0f, 1.0f,				0.49f, 1.0f, 0.39f,					//up left
	-(0.1f + outline)		  , (0.3f + outline)  ,-(0.3f + outline) ,	1.0f, 0.0f,				0.49f, 1.0f, 0.39f,					//
	-(0.1f + outline)		  , (0.1f + outline)  ,-(0.3f + outline) ,	0.0f, 0.0f,				0.49f, 1.0f, 0.39f,					//
	-(0.3f + outline)		  , (0.1f + outline)  ,-(0.3f + outline) ,	0.0f, 1.0f,				0.49f, 1.0f, 0.39f, },
	},
	{//
	{(0.1f + outline)		  , (0.3f + outline)  ,-(0.3f + outline) ,	1.0f, 1.0f,				0.49f, 1.0f, 0.39f,					//up right
	(0.3f + outline)		  , (0.3f + outline)  ,-(0.3f + outline) ,	1.0f, 0.0f,				0.49f, 1.0f, 0.39f,					//
	(0.3f + outline)		  , (0.1f + outline)  ,-(0.3f + outline) ,	0.0f, 0.0f,				0.49f, 1.0f, 0.39f,					//
	(0.1f + outline)		  , (0.1f + outline)  ,-(0.3f + outline) ,	0.0f, 1.0f,				0.49f, 1.0f, 0.39f, },				//
	 {-(0.3f + outline)		  , -(0.1f + outline) ,-(0.3f + outline) ,	1.0f, 1.0f,				0.49f, 1.0f, 0.39f,					//down left
	-(0.1f + outline)		  , -(0.1f + outline) ,-(0.3f + outline) ,	1.0f, 0.0f,				0.49f, 1.0f, 0.39f,					//
	-(0.1f + outline)		  , -(0.3f + outline) ,-(0.3f + outline) ,	0.0f, 0.0f,				0.49f, 1.0f, 0.39f,					//
	-(0.3f + outline)		  , -(0.3f + outline) ,-(0.3f + outline) ,	0.0f, 1.0f,				0.49f, 1.0f, 0.39f, },				//
	{(0.1f + outline)		  , -(0.1f + outline) ,-(0.3f + outline) ,	1.0f, 1.0f,				0.49f, 1.0f, 0.39f,					//down right
	(0.3f + outline)		  , -(0.1f + outline) ,-(0.3f + outline) ,	1.0f, 0.0f,				0.49f, 1.0f, 0.39f,					//
	(0.3f + outline)		  , -(0.3f + outline) ,-(0.3f + outline) ,	0.0f, 0.0f,				0.49f, 1.0f, 0.39f,					//
	(0.1f + outline)		  , -(0.3f + outline) ,-(0.3f + outline) ,	0.0f, 1.0f,				0.49f, 1.0f, 0.39f, },
	}//
},
{		//x							//y					//z				//texture coords			//colour						//TOP PURPLE FACE
	{
		{-0.1f					 ,0.3f + outline ,	0.1f			   , 	1.0f, 1.0f,				0.9f, 0.5f, 1.0f,					//centre
	 0.1f					 ,0.3f + outline ,	0.1f			   , 	1.0f, 0.0f,				0.9f, 0.5f, 1.0f,					//
	 0.1f					 ,0.3f + outline ,	-0.1f			   , 	0.0f, 0.0f,				0.9f, 0.5f, 1.0f,					//
	-0.1f					 ,0.3f + outline ,	-0.1f			   , 	0.0f, 1.0f,				0.9f, 0.5f, 1.0f,		},			//
{-(0.3f + outline)		 ,0.3f + outline , 0.1f			   , 	1.0f, 1.0f,					0.9f, 0.5f, 1.0f,					//left
   -(0.1f + outline)		 ,0.3f + outline , 0.1f			   , 	1.0f, 0.0f,					0.9f, 0.5f, 1.0f,					//
   -(0.1f + outline)		 ,0.3f + outline ,-0.1f			   , 	0.0f, 0.0f,					0.9f, 0.5f, 1.0f,					//
   -(0.3f + outline)		 ,0.3f + outline ,-0.1f			   , 	0.0f, 1.0f,					0.9f, 0.5f, 1.0f,		},			//
	{	(0.1f + outline)		 ,0.3f + outline , 0.1f			   , 	1.0f, 1.0f,					0.9f, 0.5f, 1.0f,					//right
	(0.3f + outline)		 ,0.3f + outline , 0.1f			   , 	1.0f, 0.0f,					0.9f, 0.5f, 1.0f,					//
	(0.3f + outline)		 ,0.3f + outline ,-0.1f			   , 	0.0f, 0.0f,					0.9f, 0.5f, 1.0f,					//
	(0.1f + outline)		 ,0.3f + outline ,-0.1f			   , 	0.0f, 1.0f,					0.9f, 0.5f, 1.0f,		},
	},
{	//
	 {-0.1f					 ,0.3f + outline , -(0.1f + outline)  , 	1.0f, 1.0f,				0.9f, 0.5f, 1.0f,					//down
	 0.1f					 ,0.3f + outline , -(0.1f + outline)  , 	1.0f, 0.0f,				0.9f, 0.5f, 1.0f,					//
	 0.1f					 ,0.3f + outline , -(0.3f + outline)  , 	0.0f, 0.0f,				0.9f, 0.5f, 1.0f,					//
	-0.1f					 ,0.3f + outline , -(0.3f + outline)  , 	0.0f, 1.0f,				0.9f, 0.5f, 1.0f,		},			//
{-0.1f					 ,0.3f + outline , (0.3f + outline)   , 	1.0f, 1.0f,				0.9f, 0.5f, 1.0f,					//up
	 0.1f					 ,0.3f + outline , (0.3f + outline)   , 	1.0f, 0.0f,				0.9f, 0.5f, 1.0f,					//
	 0.1f					 ,0.3f + outline , (0.1f + outline)   , 	0.0f, 0.0f,				0.9f, 0.5f, 1.0f,					//
	-0.1f					 ,0.3f + outline , (0.1f + outline)   , 	0.0f, 1.0f,				0.9f, 0.5f, 1.0f,		},			//
{	-(0.3f + outline)		 ,0.3f + outline , (0.3f + outline)   , 	1.0f, 1.0f,				0.9f, 0.5f, 1.0f,					//up left
	-(0.1f + outline)		 ,0.3f + outline , (0.3f + outline)   , 	1.0f, 0.0f,				0.9f, 0.5f, 1.0f,					//
	-(0.1f + outline)		 ,0.3f + outline , (0.1f + outline)   , 	0.0f, 0.0f,				0.9f, 0.5f, 1.0f,					//
	-(0.3f + outline)		 ,0.3f + outline , (0.1f + outline)   , 	0.0f, 1.0f,				0.9f, 0.5f, 1.0f,		},
	},
	{//
	{	(0.1f + outline)		 ,0.3f + outline , (0.3f + outline)   , 	1.0f, 1.0f,				0.9f, 0.5f, 1.0f,					//up right
	(0.3f + outline)		 ,0.3f + outline , (0.3f + outline)   , 	1.0f, 0.0f,				0.9f, 0.5f, 1.0f,					//
	(0.3f + outline)		 ,0.3f + outline , (0.1f + outline)   , 	0.0f, 0.0f,				0.9f, 0.5f, 1.0f,					//
	(0.1f + outline)		 ,0.3f + outline , (0.1f + outline)   , 	0.0f, 1.0f,				0.9f, 0.5f, 1.0f,		},			//
	{-(0.3f + outline)		 ,0.3f + outline , -(0.1f + outline)  , 	1.0f, 1.0f,				0.9f, 0.5f, 1.0f,					//down left
	-(0.1f + outline)		 ,0.3f + outline , -(0.1f + outline)  , 	1.0f, 0.0f,				0.9f, 0.5f, 1.0f,					//
	-(0.1f + outline)		 ,0.3f + outline , -(0.3f + outline)  , 	0.0f, 0.0f,				0.9f, 0.5f, 1.0f,					//
	-(0.3f + outline)		 ,0.3f + outline , -(0.3f + outline)  , 	0.0f, 1.0f,				0.9f, 0.5f, 1.0f,		},			//
	{(0.1f + outline)		 ,0.3f + outline , -(0.1f + outline)  , 	1.0f, 1.0f,				0.9f, 0.5f, 1.0f,					//down right
	(0.3f + outline)		 ,0.3f + outline , -(0.1f + outline)  , 	1.0f, 0.0f,				0.9f, 0.5f, 1.0f,					//
	(0.3f + outline)		 ,0.3f + outline , -(0.3f + outline)  , 	0.0f, 0.0f,				0.9f, 0.5f, 1.0f,					//
	(0.1f + outline)		 ,0.3f + outline , -(0.3f + outline)  , 	0.0f, 1.0f,				0.9f, 0.5f, 1.0f		},
	},//

}
};

unsigned int cube_indices[6 * 9 * 6] =
{
	0			,	1				,	2		   ,
	2			,	3				,	0		   ,
	4			,	5				,	6		   ,
	6			,	7				,	4		   ,
	8			,	9				,	10		   ,
	10			,	11				,	8		   ,
	12			,	13				,	14		   ,
	14			,	15				,	12		   ,
	16			,	17				,	18		   ,
	18			,	19				,	16		   ,
	20			,	21				,	22		   ,
	22			,	23				,	20		   ,
	24			,	25				,	26		   ,
	26			,	27				,	24		   ,
	28			,	29				,	30		   ,
	30			,	31				,	28		   ,
	32			,	33				,	34		   ,
	34			,	35				,	32		   ,
	0	+ (i)		,	1	+ (i)			,	2	+ (i)	   ,
	2	+ (i)		,	3	+ (i)			,	0	+ (i)	   ,
	4	+ (i)		,	5	+ (i)			,	6	+ (i)	   ,
	6	+ (i)		,	7	+ (i)			,	4	+ (i)	   ,
	8	+ (i)		,	9	+ (i)			,	10	+ (i)	   ,
	10	+ (i)		,	11	+ (i)			,	8	+ (i)	   ,
	12	+ (i)		,	13	+ (i)			,	14	+ (i)	   ,
	14	+ (i)		,	15	+ (i)			,	12	+ (i)	   ,
	16	+ (i)		,	17	+ (i)			,	18	+ (i)	   ,
	18	+ (i)		,	19	+ (i)			,	16	+ (i)	   ,
	20	+ (i)		,	21	+ (i)			,	22	+ (i)	   ,
	22	+ (i)		,	23	+ (i)			,	20	+ (i)	   ,
	24	+ (i)		,	25	+ (i)			,	26	+ (i)	   ,
	26	+ (i)		,	27	+ (i)			,	24	+ (i)	   ,
	28	+ (i)		,	29	+ (i)			,	30	+ (i)	   ,
	30	+ (i)		,	31	+ (i)			,	28	+ (i)	   ,
	32	+ (i)		,	33	+ (i)			,	34	+ (i)	   ,
	34	+ (i)		,	35	+ (i)			,	32	+ (i)	   ,
	0 + (i * 2)			,	1 + (i * 2)				,	2 + (i * 2)		   ,
	2 + (i * 2)			,	3 + (i * 2)				,	0 + (i * 2)		   ,
	4 + (i * 2)			,	5 + (i * 2)				,	6 + (i * 2)		   ,
	6 + (i * 2)			,	7 + (i * 2)				,	4 + (i * 2)		   ,
	8 + (i * 2)			,	9 + (i * 2)				,	10 + (i * 2)	   ,
	10 + (i * 2)		,	11 + (i * 2)			,	8 + (i * 2)		   ,
	12 + (i * 2)		,	13 + (i * 2)			,	14 + (i * 2)	   ,
	14 + (i * 2)		,	15 + (i * 2)			,	12 + (i * 2)	   ,
	16 + (i * 2)		,	17 + (i * 2)			,	18 + (i * 2)	   ,
	18 + (i * 2)		,	19 + (i * 2)			,	16 + (i * 2)	   ,
	20 + (i * 2)		,	21 + (i * 2)			,	22 + (i * 2)	   ,
	22 + (i * 2)		,	23 + (i * 2)			,	20 + (i * 2)	   ,
	24 + (i * 2)		,	25 + (i * 2)			,	26 + (i * 2)	   ,
	26 + (i * 2)		,	27 + (i * 2)			,	24 + (i * 2)	   ,
	28 + (i * 2)		,	29 + (i * 2)			,	30 + (i * 2)	   ,
	30 + (i * 2)		,	31 + (i * 2)			,	28 + (i * 2)	   ,
	32 + (i * 2)		,	33 + (i * 2)			,	34 + (i * 2)	   ,
	34 + (i * 2)		,	35 + (i * 2)			,	32 + (i * 2)	   ,
	0 + (i * 3)			,	1 + (i * 3)				,	2 + (i * 3)		   ,
	2 + (i * 3)			,	3 + (i * 3)				,	0 + (i * 3)		   ,
	4 + (i * 3)			,	5 + (i * 3)				,	6 + (i * 3)		   ,
	6 + (i * 3)			,	7 + (i * 3)				,	4 + (i * 3)		   ,
	8 + (i * 3)			,	9 + (i * 3)				,	10 + (i * 3)	   ,
	10 + (i * 3)		,	11 + (i * 3)			,	8 + (i * 3)		   ,
	12 + (i * 3)		,	13 + (i * 3)			,	14 + (i * 3)	   ,
	14 + (i * 3)		,	15 + (i * 3)			,	12 + (i * 3)	   ,
	16 + (i * 3)		,	17 + (i * 3)			,	18 + (i * 3)	   ,
	18 + (i * 3)		,	19 + (i * 3)			,	16 + (i * 3)	   ,
	20 + (i * 3)		,	21 + (i * 3)			,	22 + (i * 3)	   ,
	22 + (i * 3)		,	23 + (i * 3)			,	20 + (i * 3)	   ,
	24 + (i * 3)		,	25 + (i * 3)			,	26 + (i * 3)	   ,
	26 + (i * 3)		,	27 + (i * 3)			,	24 + (i * 3)	   ,
	28 + (i * 3)		,	29 + (i * 3)			,	30 + (i * 3)	   ,
	30 + (i * 3)		,	31 + (i * 3)			,	28 + (i * 3)	   ,
	32 + (i * 3)		,	33 + (i * 3)			,	34 + (i * 3)	   ,
	34 + (i * 3)		,	35 + (i * 3)			,	32 + (i * 3)	   ,
	0 + (i * 4)			,	1 + (i * 4)				,	2 + (i * 4)		   ,
	2 + (i * 4)			,	3 + (i * 4)				,	0 + (i * 4)		   ,
	4 + (i * 4)			,	5 + (i * 4)				,	6 + (i * 4)		   ,
	6 + (i * 4)			,	7 + (i * 4)				,	4 + (i * 4)		   ,
	8 + (i * 4)			,	9 + (i * 4)				,	10 + (i * 4)	   ,
	10 + (i * 4)		,	11 + (i * 4)			,	8 + (i * 4)		   ,
	12 + (i * 4)		,	13 + (i * 4)			,	14 + (i * 4)	   ,
	14 + (i * 4)		,	15 + (i * 4)			,	12 + (i * 4)	   ,
	16 + (i * 4)		,	17 + (i * 4)			,	18 + (i * 4)	   ,
	18 + (i * 4)		,	19 + (i * 4)			,	16 + (i * 4)	   ,
	20 + (i * 4)		,	21 + (i * 4)			,	22 + (i * 4)	   ,
	22 + (i * 4)		,	23 + (i * 4)			,	20 + (i * 4)	   ,
	24 + (i * 4)		,	25 + (i * 4)			,	26 + (i * 4)	   ,
	26 + (i * 4)		,	27 + (i * 4)			,	24 + (i * 4)	   ,
	28 + (i * 4)		,	29 + (i * 4)			,	30 + (i * 4)	   ,
	30 + (i * 4)		,	31 + (i * 4)			,	28 + (i * 4)	   ,
	32 + (i * 4)		,	33 + (i * 4)			,	34 + (i * 4)	   ,
	34 + (i * 4)		,	35 + (i * 4)			,	32 + (i * 4)	   ,
	0 + (i *5)			,	1 + (i *5)				,	2 + (i *5)		   ,
	2 + (i *5)			,	3 + (i *5)				,	0 + (i *5)		   ,
	4 + (i *5)			,	5 + (i *5)				,	6 + (i *5)		   ,
	6 + (i *5)			,	7 + (i *5)				,	4 + (i *5)		   ,
	8 + (i *5)			,	9 + (i *5)				,	10 + (i *5)		   ,
	10 + (i *5)			,	11 + (i *5)				,	8 + (i *5)		   ,
	12 + (i *5)			,	13 + (i *5)				,	14 + (i *5)		   ,
	14 + (i *5)			,	15 + (i *5)				,	12 + (i *5)		   ,
	16 + (i *5)			,	17 + (i *5)				,	18 + (i *5)		   ,
	18 + (i *5)			,	19 + (i *5)				,	16 + (i *5)		   ,
	20 + (i *5)			,	21 + (i *5)				,	22 + (i *5)		   ,
	22 + (i *5)			,	23 + (i *5)				,	20 + (i *5)		   ,
	24 + (i *5)			,	25 + (i *5)				,	26 + (i *5)		   ,
	26 + (i *5)			,	27 + (i *5)				,	24 + (i *5)		   ,
	28 + (i *5)			,	29 + (i *5)				,	30 + (i *5)		   ,
	30 + (i *5)			,	31 + (i *5)				,	28 + (i *5)		   ,
	32 + (i *5)			,	33 + (i *5)				,	34 + (i *5)		   ,
	34 + (i *5)			,	35 + (i *5)				,	32 + (i *5)		   ,
};

void animate_rotate_yellowi() {
	std::cout << "rotate yellowi\n";
	//cubik temp0 = arr[0][0][2];
	//cubik temp1 = arr[0][1][2];
	//cubik temp2 = arr[0][2][2];
	float temp0[32];
	float temp1[32];
	float temp2[32];
	std::memcpy(temp0, positions[0][0][2], sizeof(float) * 32);
	std::memcpy(temp1, positions[0][1][2], sizeof(float) * 32);
	std::memcpy(temp2, positions[0][2][2], sizeof(float) * 32);
	for (int i = 0; i < 3; i++) {
		std::memcpy(positions[0][i][2], positions[5][i][2], sizeof(float) * 32);
		//arr[0][i][2] = arr[5][i][2];
	}
	//
	for (int i = 0; i < 3; i++) {
		std::memcpy(positions[5][i][2], positions[4][i][2], sizeof(float) * 32);
		//arr[5][i][2] = arr[4][i][2];
	}
	
	for (int i = 0; i < 3; i++) {
		std::memcpy(positions[4][i][2], positions[2][i][2], sizeof(float) * 32);
	//	arr[4][i][2] = arr[2][i][2];
	}
	//
	std::memcpy(positions[2][0][2], temp0, sizeof(float) * 32);
	std::memcpy(positions[2][1][2], temp1, sizeof(float) * 32);
	std::memcpy(positions[2][2][2], temp2, sizeof(float) * 32);
	//arr[2][0][2] = temp0;
	//arr[2][1][2] = temp1;
	//arr[2][2][2] = temp2;
	//cubik temp = arr[1][0][0];
	//rotate_matrixi(3);
}
#endif