#pragma once
float outline = 0.01f;
unsigned int i = 36;
float positions[] = {
	//x							//y					//z				//texture coords			//colour						//FACE 0
	-0.1f					  ,	0.1f			  , 0.3f + outline ,	1.0f, 1.0f,				1.0f,1.0f,1.0f,					//centre
	 0.1f					  ,	0.1f			  , 0.3f + outline ,	1.0f, 0.0f,				1.0f,1.0f,1.0f,					//
	 0.1f					  ,	-0.1f			  , 0.3f + outline ,	0.0f, 0.0f,				1.0f,1.0f,1.0f,					//
	-0.1f					  ,	-0.1f			  , 0.3f + outline ,	0.0f, 1.0f,				1.0f,1.0f,1.0f,					//
   -(0.3f + outline)		  , 0.1f			  , 0.3f + outline ,	1.0f, 1.0f,				1.0f,1.0f,1.0f,					//left
   -(0.1f + outline)		  , 0.1f			  , 0.3f + outline ,	1.0f, 0.0f,				1.0f,1.0f,1.0f,					//
   -(0.1f + outline)		  ,-0.1f			  , 0.3f + outline ,	0.0f, 0.0f,				1.0f,1.0f,1.0f,					//
   -(0.3f + outline)		  ,-0.1f			  , 0.3f + outline ,	0.0f, 1.0f,				1.0f,1.0f,1.0f,					//
	(0.1f + outline)		  , 0.1f			  , 0.3f + outline ,	1.0f, 1.0f,				1.0f,1.0f,1.0f,					//right
	(0.3f + outline)		  , 0.1f			  , 0.3f + outline ,	1.0f, 0.0f,				1.0f,1.0f,1.0f,					//
	(0.3f + outline)		  ,-0.1f			  , 0.3f + outline ,	0.0f, 0.0f,				1.0f,1.0f,1.0f,					//
	(0.1f + outline)		  ,-0.1f			  , 0.3f + outline ,	0.0f, 1.0f,				1.0f,1.0f,1.0f,					//
	-0.1f					  , -(0.1f + outline) , 0.3f + outline ,	1.0f, 1.0f,				1.0f,1.0f,1.0f,					//down
	 0.1f					  , -(0.1f + outline) , 0.3f + outline ,	1.0f, 0.0f,				1.0f,1.0f,1.0f,					//
	 0.1f					  , -(0.3f + outline) , 0.3f + outline ,	0.0f, 0.0f,				1.0f,1.0f,1.0f,					//
	-0.1f					  , -(0.3f + outline) , 0.3f + outline ,	0.0f, 1.0f,				1.0f,1.0f,1.0f,					//
	-0.1f					  , (0.3f + outline)  , 0.3f + outline ,	1.0f, 1.0f,				1.0f,1.0f,1.0f,					//up
	 0.1f					  , (0.3f + outline)  , 0.3f + outline ,	1.0f, 0.0f,				1.0f,1.0f,1.0f,					//
	 0.1f					  , (0.1f + outline)  , 0.3f + outline ,	0.0f, 0.0f,				1.0f,1.0f,1.0f,					//
	-0.1f					  , (0.1f + outline)  , 0.3f + outline ,	0.0f, 1.0f,				1.0f,1.0f,1.0f,					//
	-(0.3f + outline)		  , (0.3f + outline)  , 0.3f + outline ,	1.0f, 1.0f,				1.0f,1.0f,1.0f,					//up left
	-(0.1f + outline)		  , (0.3f + outline)  , 0.3f + outline ,	1.0f, 0.0f,				1.0f,1.0f,1.0f,					//
	-(0.1f + outline)		  , (0.1f + outline)  , 0.3f + outline ,	0.0f, 0.0f,				1.0f,1.0f,1.0f,					//
	-(0.3f + outline)		  , (0.1f + outline)  , 0.3f + outline ,	0.0f, 1.0f,				1.0f,1.0f,1.0f,					//
	(0.1f + outline)		  , (0.3f + outline)  , 0.3f + outline ,	1.0f, 1.0f,				1.0f,1.0f,1.0f,					//up right
	(0.3f + outline)		  , (0.3f + outline)  , 0.3f + outline ,	1.0f, 0.0f,				1.0f,1.0f,1.0f,					//
	(0.3f + outline)		  , (0.1f + outline)  , 0.3f + outline ,	0.0f, 0.0f,				1.0f,1.0f,1.0f,					//
	(0.1f + outline)		  , (0.1f + outline)  , 0.3f + outline ,	0.0f, 1.0f,				1.0f,1.0f,1.0f,					//
	-(0.3f + outline)		  , -(0.1f + outline) , 0.3f + outline ,	1.0f, 1.0f,				1.0f,1.0f,1.0f,					//down left
	-(0.1f + outline)		  , -(0.1f + outline) , 0.3f + outline ,	1.0f, 0.0f,				1.0f,1.0f,1.0f,					//
	-(0.1f + outline)		  , -(0.3f + outline) , 0.3f + outline ,	0.0f, 0.0f,				1.0f,1.0f,1.0f,					//
	-(0.3f + outline)		  , -(0.3f + outline) , 0.3f + outline ,	0.0f, 1.0f,				1.0f,1.0f,1.0f,					//
	(0.1f + outline)		  , -(0.1f + outline) , 0.3f + outline ,	1.0f, 1.0f,				1.0f,1.0f,1.0f,					//down right
	(0.3f + outline)		  , -(0.1f + outline) , 0.3f + outline ,	1.0f, 0.0f,				1.0f,1.0f,1.0f,					//
	(0.3f + outline)		  , -(0.3f + outline) , 0.3f + outline ,	0.0f, 0.0f,				1.0f,1.0f,1.0f,					//
	(0.1f + outline)		  , -(0.3f + outline) , 0.3f + outline ,	0.0f, 1.0f,				1.0f,1.0f,1.0f,					//

		//x							//y					//z				//texture coords		//Color							//FACE 1
	-0.1f					  ,	0.1f			  ,-(0.3f + outline) ,	1.0f, 1.0f,				1.0f, 0.547f, 0.0f	,					//centre
	 0.1f					  ,	0.1f			  ,-(0.3f + outline) ,	1.0f, 0.0f,				1.0f, 0.547f, 0.0f	,					//
	 0.1f					  ,	-0.1f			  ,-(0.3f + outline) ,	0.0f, 0.0f,				1.0f, 0.547f, 0.0f	,					//
	-0.1f					  ,	-0.1f			  ,-(0.3f + outline) ,	0.0f, 1.0f,				1.0f, 0.547f, 0.0f	,					//
   -(0.3f + outline)		  , 0.1f			  ,-(0.3f + outline) ,	1.0f, 1.0f,				1.0f, 0.547f, 0.0f	,					//left
   -(0.1f + outline)		  , 0.1f			  ,-(0.3f + outline) ,	1.0f, 0.0f,				1.0f, 0.547f, 0.0f	,					//
   -(0.1f + outline)		  ,-0.1f			  ,-(0.3f + outline) ,	0.0f, 0.0f,				1.0f, 0.547f, 0.0f	,					//
   -(0.3f + outline)		  ,-0.1f			  ,-(0.3f + outline) ,	0.0f, 1.0f,				1.0f, 0.547f, 0.0f	,					//
	(0.1f + outline)		  , 0.1f			  ,-(0.3f + outline) ,	1.0f, 1.0f,				1.0f, 0.547f, 0.0f	,					//right
	(0.3f + outline)		  , 0.1f			  ,-(0.3f + outline) ,	1.0f, 0.0f,				1.0f, 0.547f, 0.0f	,					//
	(0.3f + outline)		  ,-0.1f			  ,-(0.3f + outline) ,	0.0f, 0.0f,				1.0f, 0.547f, 0.0f	,					//
	(0.1f + outline)		  ,-0.1f			  ,-(0.3f + outline) ,	0.0f, 1.0f,				1.0f, 0.547f, 0.0f	,					//
	-0.1f					  , -(0.1f + outline) ,-(0.3f + outline) ,	1.0f, 1.0f,				1.0f, 0.547f, 0.0f	,					//down
	 0.1f					  , -(0.1f + outline) ,-(0.3f + outline) ,	1.0f, 0.0f,				1.0f, 0.547f, 0.0f	,					//
	 0.1f					  , -(0.3f + outline) ,-(0.3f + outline) ,	0.0f, 0.0f,				1.0f, 0.547f, 0.0f	,					//
	-0.1f					  , -(0.3f + outline) ,-(0.3f + outline) ,	0.0f, 1.0f,				1.0f, 0.547f, 0.0f	,					//
	-0.1f					  , (0.3f + outline)  ,-(0.3f + outline) ,	1.0f, 1.0f,				1.0f, 0.547f, 0.0f	,					//up
	 0.1f					  , (0.3f + outline)  ,-(0.3f + outline) ,	1.0f, 0.0f,				1.0f, 0.547f, 0.0f	,					//
	 0.1f					  , (0.1f + outline)  ,-(0.3f + outline) ,	0.0f, 0.0f,				1.0f, 0.547f, 0.0f	,					//
	-0.1f					  , (0.1f + outline)  ,-(0.3f + outline) ,	0.0f, 1.0f,				1.0f, 0.547f, 0.0f	,					//
	-(0.3f + outline)		  , (0.3f + outline)  ,-(0.3f + outline) ,	1.0f, 1.0f,				1.0f, 0.547f, 0.0f	,					//up left
	-(0.1f + outline)		  , (0.3f + outline)  ,-(0.3f + outline) ,	1.0f, 0.0f,				1.0f, 0.547f, 0.0f	,					//
	-(0.1f + outline)		  , (0.1f + outline)  ,-(0.3f + outline) ,	0.0f, 0.0f,				1.0f, 0.547f, 0.0f	,					//
	-(0.3f + outline)		  , (0.1f + outline)  ,-(0.3f + outline) ,	0.0f, 1.0f,				1.0f, 0.547f, 0.0f	,					//
	(0.1f + outline)		  , (0.3f + outline)  ,-(0.3f + outline) ,	1.0f, 1.0f,				1.0f, 0.547f, 0.0f	,					//up right
	(0.3f + outline)		  , (0.3f + outline)  ,-(0.3f + outline) ,	1.0f, 0.0f,				1.0f, 0.547f, 0.0f	,					//
	(0.3f + outline)		  , (0.1f + outline)  ,-(0.3f + outline) ,	0.0f, 0.0f,				1.0f, 0.547f, 0.0f	,					//
	(0.1f + outline)		  , (0.1f + outline)  ,-(0.3f + outline) ,	0.0f, 1.0f,				1.0f, 0.547f, 0.0f	,					//
	-(0.3f + outline)		  , -(0.1f + outline) ,-(0.3f + outline) ,	1.0f, 1.0f,				1.0f, 0.547f, 0.0f	,					//down left
	-(0.1f + outline)		  , -(0.1f + outline) ,-(0.3f + outline) ,	1.0f, 0.0f,				1.0f, 0.547f, 0.0f	,					//
	-(0.1f + outline)		  , -(0.3f + outline) ,-(0.3f + outline) ,	0.0f, 0.0f,				1.0f, 0.547f, 0.0f	,					//
	-(0.3f + outline)		  , -(0.3f + outline) ,-(0.3f + outline) ,	0.0f, 1.0f,				1.0f, 0.547f, 0.0f	,					//
	(0.1f + outline)		  , -(0.1f + outline) ,-(0.3f + outline) ,	1.0f, 1.0f,				1.0f, 0.547f, 0.0f	,					//down right
	(0.3f + outline)		  , -(0.1f + outline) ,-(0.3f + outline) ,	1.0f, 0.0f,				1.0f, 0.547f, 0.0f	,					//
	(0.3f + outline)		  , -(0.3f + outline) ,-(0.3f + outline) ,	0.0f, 0.0f,				1.0f, 0.547f, 0.0f	,					//
	(0.1f + outline)		  , -(0.3f + outline) ,-(0.3f + outline) ,	0.0f, 1.0f,				1.0f, 0.547f, 0.0f	,					//

		//x							//y					//z				//texture coords			//colour						//FACE 2
	-0.1f					 ,0.3f + outline ,	0.1f			   , 	1.0f, 1.0f,				0.0f, 0.713f, 0.756f,					//centre
	 0.1f					 ,0.3f + outline ,	0.1f			   , 	1.0f, 0.0f,				0.0f, 0.713f, 0.756f,					//
	 0.1f					 ,0.3f + outline ,	-0.1f			   , 	0.0f, 0.0f,				0.0f, 0.713f, 0.756f,					//
	-0.1f					 ,0.3f + outline ,	-0.1f			   , 	0.0f, 1.0f,				0.0f, 0.713f, 0.756f,					//
   -(0.3f + outline)		 ,0.3f + outline , 0.1f			   , 	1.0f, 1.0f,					0.0f, 0.713f, 0.756f,					//left
   -(0.1f + outline)		 ,0.3f + outline , 0.1f			   , 	1.0f, 0.0f,					0.0f, 0.713f, 0.756f,					//
   -(0.1f + outline)		 ,0.3f + outline ,-0.1f			   , 	0.0f, 0.0f,					0.0f, 0.713f, 0.756f,					//
   -(0.3f + outline)		 ,0.3f + outline ,-0.1f			   , 	0.0f, 1.0f,					0.0f, 0.713f, 0.756f,					//
	(0.1f + outline)		 ,0.3f + outline , 0.1f			   , 	1.0f, 1.0f,					0.0f, 0.713f, 0.756f,					//right
	(0.3f + outline)		 ,0.3f + outline , 0.1f			   , 	1.0f, 0.0f,					0.0f, 0.713f, 0.756f,					//
	(0.3f + outline)		 ,0.3f + outline ,-0.1f			   , 	0.0f, 0.0f,					0.0f, 0.713f, 0.756f,					//
	(0.1f + outline)		 ,0.3f + outline ,-0.1f			   , 	0.0f, 1.0f,					0.0f, 0.713f, 0.756f,					//
	-0.1f					 ,0.3f + outline , -(0.1f + outline)  , 	1.0f, 1.0f,				0.0f, 0.713f, 0.756f,					//down
	 0.1f					 ,0.3f + outline , -(0.1f + outline)  , 	1.0f, 0.0f,				0.0f, 0.713f, 0.756f,					//
	 0.1f					 ,0.3f + outline , -(0.3f + outline)  , 	0.0f, 0.0f,				0.0f, 0.713f, 0.756f,					//
	-0.1f					 ,0.3f + outline , -(0.3f + outline)  , 	0.0f, 1.0f,				0.0f, 0.713f, 0.756f,					//
	-0.1f					 ,0.3f + outline , (0.3f + outline)   , 	1.0f, 1.0f,				0.0f, 0.713f, 0.756f,					//up
	 0.1f					 ,0.3f + outline , (0.3f + outline)   , 	1.0f, 0.0f,				0.0f, 0.713f, 0.756f,					//
	 0.1f					 ,0.3f + outline , (0.1f + outline)   , 	0.0f, 0.0f,				0.0f, 0.713f, 0.756f,					//
	-0.1f					 ,0.3f + outline , (0.1f + outline)   , 	0.0f, 1.0f,				0.0f, 0.713f, 0.756f,					//
	-(0.3f + outline)		 ,0.3f + outline , (0.3f + outline)   , 	1.0f, 1.0f,				0.0f, 0.713f, 0.756f,					//up left
	-(0.1f + outline)		 ,0.3f + outline , (0.3f + outline)   , 	1.0f, 0.0f,				0.0f, 0.713f, 0.756f,					//
	-(0.1f + outline)		 ,0.3f + outline , (0.1f + outline)   , 	0.0f, 0.0f,				0.0f, 0.713f, 0.756f,					//
	-(0.3f + outline)		 ,0.3f + outline , (0.1f + outline)   , 	0.0f, 1.0f,				0.0f, 0.713f, 0.756f,					//
	(0.1f + outline)		 ,0.3f + outline , (0.3f + outline)   , 	1.0f, 1.0f,				0.0f, 0.713f, 0.756f,					//up right
	(0.3f + outline)		 ,0.3f + outline , (0.3f + outline)   , 	1.0f, 0.0f,				0.0f, 0.713f, 0.756f,					//
	(0.3f + outline)		 ,0.3f + outline , (0.1f + outline)   , 	0.0f, 0.0f,				0.0f, 0.713f, 0.756f,					//
	(0.1f + outline)		 ,0.3f + outline , (0.1f + outline)   , 	0.0f, 1.0f,				0.0f, 0.713f, 0.756f,					//
	-(0.3f + outline)		 ,0.3f + outline , -(0.1f + outline)  , 	1.0f, 1.0f,				0.0f, 0.713f, 0.756f,					//down left
	-(0.1f + outline)		 ,0.3f + outline , -(0.1f + outline)  , 	1.0f, 0.0f,				0.0f, 0.713f, 0.756f,					//
	-(0.1f + outline)		 ,0.3f + outline , -(0.3f + outline)  , 	0.0f, 0.0f,				0.0f, 0.713f, 0.756f,					//
	-(0.3f + outline)		 ,0.3f + outline , -(0.3f + outline)  , 	0.0f, 1.0f,				0.0f, 0.713f, 0.756f,					//
	(0.1f + outline)		 ,0.3f + outline , -(0.1f + outline)  , 	1.0f, 1.0f,				0.0f, 0.713f, 0.756f,					//down right
	(0.3f + outline)		 ,0.3f + outline , -(0.1f + outline)  , 	1.0f, 0.0f,				0.0f, 0.713f, 0.756f,					//
	(0.3f + outline)		 ,0.3f + outline , -(0.3f + outline)  , 	0.0f, 0.0f,				0.0f, 0.713f, 0.756f,					//
	(0.1f + outline)		 ,0.3f + outline , -(0.3f + outline)  , 	0.0f, 1.0f,				0.0f, 0.713f, 0.756f,					//

		 		//x							//y					//z				//texture coords			//colour					//FACE 3
	-0.1f					 ,-(0.3f + outline) ,	0.1f			   , 	1.0f, 1.0f,			0.1f, 0.213f, 0.556f,				//centre
	 0.1f					 ,-(0.3f + outline) ,	0.1f			   , 	1.0f, 0.0f,			0.1f, 0.213f, 0.556f,				//
	 0.1f					 ,-(0.3f + outline) ,	-0.1f			   , 	0.0f, 0.0f,			0.1f, 0.213f, 0.556f,				//
	-0.1f					 ,-(0.3f + outline) ,	-0.1f			   , 	0.0f, 1.0f,			0.1f, 0.213f, 0.556f,				//
   -(0.3f + outline)		 ,-(0.3f + outline) , 0.1f			   , 	1.0f, 1.0f,				0.1f, 0.213f, 0.556f,				//left
   -(0.1f + outline)		 ,-(0.3f + outline) , 0.1f			   , 	1.0f, 0.0f,				0.1f, 0.213f, 0.556f,				//
   -(0.1f + outline)		 ,-(0.3f + outline) ,-0.1f			   , 	0.0f, 0.0f,				0.1f, 0.213f, 0.556f,				//
   -(0.3f + outline)		 ,-(0.3f + outline) ,-0.1f			   , 	0.0f, 1.0f,				0.1f, 0.213f, 0.556f,				//
	(0.1f + outline)		 ,-(0.3f + outline) , 0.1f			   , 	1.0f, 1.0f,				0.1f, 0.213f, 0.556f,				//right
	(0.3f + outline)		 ,-(0.3f + outline) , 0.1f			   , 	1.0f, 0.0f,				0.1f, 0.213f, 0.556f,				//
	(0.3f + outline)		 ,-(0.3f + outline) ,-0.1f			   , 	0.0f, 0.0f,				0.1f, 0.213f, 0.556f,				//
	(0.1f + outline)		 ,-(0.3f + outline) ,-0.1f			   , 	0.0f, 1.0f,				0.1f, 0.213f, 0.556f,				//
	-0.1f					 ,-(0.3f + outline) , -(0.1f + outline)  , 	1.0f, 1.0f,				0.1f, 0.213f, 0.556f,			//down
	 0.1f					 ,-(0.3f + outline) , -(0.1f + outline)  , 	1.0f, 0.0f,				0.1f, 0.213f, 0.556f,			//
	 0.1f					 ,-(0.3f + outline) , -(0.3f + outline)  , 	0.0f, 0.0f,				0.1f, 0.213f, 0.556f,			//
	-0.1f					 ,-(0.3f + outline) , -(0.3f + outline)  , 	0.0f, 1.0f,				0.1f, 0.213f, 0.556f,			//
	-0.1f					 ,-(0.3f + outline) , (0.3f + outline)   , 	1.0f, 1.0f,				0.1f, 0.213f, 0.556f,			//up
	 0.1f					 ,-(0.3f + outline) , (0.3f + outline)   , 	1.0f, 0.0f,				0.1f, 0.213f, 0.556f,			//
	 0.1f					 ,-(0.3f + outline) , (0.1f + outline)   , 	0.0f, 0.0f,				0.1f, 0.213f, 0.556f,			//
	-0.1f					 ,-(0.3f + outline) , (0.1f + outline)   , 	0.0f, 1.0f,				0.1f, 0.213f, 0.556f,			//
	-(0.3f + outline)		 ,-(0.3f + outline) , (0.3f + outline)   , 	1.0f, 1.0f,				0.1f, 0.213f, 0.556f,			//up left
	-(0.1f + outline)		 ,-(0.3f + outline) , (0.3f + outline)   , 	1.0f, 0.0f,				0.1f, 0.213f, 0.556f,			//
	-(0.1f + outline)		 ,-(0.3f + outline) , (0.1f + outline)   , 	0.0f, 0.0f,				0.1f, 0.213f, 0.556f,			//
	-(0.3f + outline)		 ,-(0.3f + outline) , (0.1f + outline)   , 	0.0f, 1.0f,				0.1f, 0.213f, 0.556f,			//
	(0.1f + outline)		 ,-(0.3f + outline) , (0.3f + outline)   , 	1.0f, 1.0f,				0.1f, 0.213f, 0.556f,			//up right
	(0.3f + outline)		 ,-(0.3f + outline) , (0.3f + outline)   , 	1.0f, 0.0f,				0.1f, 0.213f, 0.556f,			//
	(0.3f + outline)		 ,-(0.3f + outline) , (0.1f + outline)   , 	0.0f, 0.0f,				0.1f, 0.213f, 0.556f,			//
	(0.1f + outline)		 ,-(0.3f + outline) , (0.1f + outline)   , 	0.0f, 1.0f,				0.1f, 0.213f, 0.556f,			//
	-(0.3f + outline)		 ,-(0.3f + outline) , -(0.1f + outline)  , 	1.0f, 1.0f,				0.1f, 0.213f, 0.556f,			//down left
	-(0.1f + outline)		 ,-(0.3f + outline) , -(0.1f + outline)  , 	1.0f, 0.0f,				0.1f, 0.213f, 0.556f,			//
	-(0.1f + outline)		 ,-(0.3f + outline) , -(0.3f + outline)  , 	0.0f, 0.0f,				0.1f, 0.213f, 0.556f,			//
	-(0.3f + outline)		 ,-(0.3f + outline) , -(0.3f + outline)  , 	0.0f, 1.0f,				0.1f, 0.213f, 0.556f,			//
	(0.1f + outline)		 ,-(0.3f + outline) , -(0.1f + outline)  , 	1.0f, 1.0f,				0.1f, 0.213f, 0.556f,			//down right
	(0.3f + outline)		 ,-(0.3f + outline) , -(0.1f + outline)  , 	1.0f, 0.0f,				0.1f, 0.213f, 0.556f,			//
	(0.3f + outline)		 ,-(0.3f + outline) , -(0.3f + outline)  , 	0.0f, 0.0f,				0.1f, 0.213f, 0.556f,			//
	(0.1f + outline)		 ,-(0.3f + outline) , -(0.3f + outline)  , 	0.0f, 1.0f,				0.1f, 0.213f, 0.556f,			//

				//x							//y					//z				//texture coords			//colour						//FACE 4
		0.3f + outline ,	-0.1f					 ,	0.1f			   , 	1.0f, 1.0f,				0.2f,0.7f,0.25f,					//centre
		0.3f + outline ,	 0.1f					 ,	0.1f			   , 	1.0f, 0.0f,				0.2f,0.7f,0.25f,					//
		0.3f + outline ,	 0.1f					 ,	-0.1f			   , 	0.0f, 0.0f,				0.2f,0.7f,0.25f,					//
		0.3f + outline ,	-0.1f					 ,	-0.1f			   , 	0.0f, 1.0f,				0.2f,0.7f,0.25f,					//
		0.3f + outline ,   -(0.3f + outline)		 , 0.1f			   , 	1.0f, 1.0f,					0.2f,0.7f,0.25f,					//left
		0.3f + outline ,   -(0.1f + outline)		 , 0.1f			   , 	1.0f, 0.0f,					0.2f,0.7f,0.25f,					//
		0.3f + outline ,   -(0.1f + outline)		 ,-0.1f			   , 	0.0f, 0.0f,					0.2f,0.7f,0.25f,					//
		0.3f + outline ,   -(0.3f + outline)		 ,-0.1f			   , 	0.0f, 1.0f,					0.2f,0.7f,0.25f,					//
		0.3f + outline ,	(0.1f + outline)		 , 0.1f			   , 	1.0f, 1.0f,					0.2f,0.7f,0.25f,					//right
		0.3f + outline ,	(0.3f + outline)		 , 0.1f			   , 	1.0f, 0.0f,					0.2f,0.7f,0.25f,					//
		0.3f + outline ,	(0.3f + outline)		 ,-0.1f			   , 	0.0f, 0.0f,					0.2f,0.7f,0.25f,					//
		0.3f + outline ,	(0.1f + outline)		 ,-0.1f			   , 	0.0f, 1.0f,					0.2f,0.7f,0.25f,					//
		0.3f + outline ,	-0.1f					 , -(0.1f + outline)  , 	1.0f, 1.0f,				0.2f,0.7f,0.25f,					//down
		0.3f + outline ,	 0.1f					 , -(0.1f + outline)  , 	1.0f, 0.0f,				0.2f,0.7f,0.25f,					//
		0.3f + outline ,	 0.1f					 , -(0.3f + outline)  , 	0.0f, 0.0f,				0.2f,0.7f,0.25f,					//
		0.3f + outline ,	-0.1f					 , -(0.3f + outline)  , 	0.0f, 1.0f,				0.2f,0.7f,0.25f,					//
		0.3f + outline ,	-0.1f					 , (0.3f + outline)   , 	1.0f, 1.0f,				0.2f,0.7f,0.25f,					//up
		0.3f + outline ,	 0.1f					 , (0.3f + outline)   , 	1.0f, 0.0f,				0.2f,0.7f,0.25f,					//
		0.3f + outline ,	 0.1f					 , (0.1f + outline)   , 	0.0f, 0.0f,				0.2f,0.7f,0.25f,					//
		0.3f + outline ,	-0.1f					 , (0.1f + outline)   , 	0.0f, 1.0f,				0.2f,0.7f,0.25f,					//
		0.3f + outline ,	-(0.3f + outline)		 , (0.3f + outline)   , 	1.0f, 1.0f,				0.2f,0.7f,0.25f,					//up left
		0.3f + outline ,	-(0.1f + outline)		 , (0.3f + outline)   , 	1.0f, 0.0f,				0.2f,0.7f,0.25f,					//
		0.3f + outline ,	-(0.1f + outline)		 , (0.1f + outline)   , 	0.0f, 0.0f,				0.2f,0.7f,0.25f,					//
		0.3f + outline ,	-(0.3f + outline)		 , (0.1f + outline)   , 	0.0f, 1.0f,				0.2f,0.7f,0.25f,					//
		0.3f + outline ,	(0.1f + outline)		 , (0.3f + outline)   , 	1.0f, 1.0f,				0.2f,0.7f,0.25f,					//up right
		0.3f + outline ,	(0.3f + outline)		 , (0.3f + outline)   , 	1.0f, 0.0f,				0.2f,0.7f,0.25f,					//
		0.3f + outline ,	(0.3f + outline)		 , (0.1f + outline)   , 	0.0f, 0.0f,				0.2f,0.7f,0.25f,					//
		0.3f + outline ,	(0.1f + outline)		 , (0.1f + outline)   , 	0.0f, 1.0f,				0.2f,0.7f,0.25f,					//
		0.3f + outline ,	-(0.3f + outline)		 , -(0.1f + outline)  , 	1.0f, 1.0f,				0.2f,0.7f,0.25f,					//down left
		0.3f + outline ,	-(0.1f + outline)		 , -(0.1f + outline)  , 	1.0f, 0.0f,				0.2f,0.7f,0.25f,					//
		0.3f + outline ,	-(0.1f + outline)		 , -(0.3f + outline)  , 	0.0f, 0.0f,				0.2f,0.7f,0.25f,					//
		0.3f + outline ,	-(0.3f + outline)		 , -(0.3f + outline)  , 	0.0f, 1.0f,				0.2f,0.7f,0.25f,					//
		0.3f + outline ,	(0.1f + outline)		 , -(0.1f + outline)  , 	1.0f, 1.0f,				0.2f,0.7f,0.25f,					//down right
		0.3f + outline ,	(0.3f + outline)		 , -(0.1f + outline)  , 	1.0f, 0.0f,				0.2f,0.7f,0.25f,					//
		0.3f + outline ,	(0.3f + outline)		 , -(0.3f + outline)  , 	0.0f, 0.0f,				0.2f,0.7f,0.25f,					//
		0.3f + outline ,	(0.1f + outline)		 , -(0.3f + outline)  , 	0.0f, 1.0f,				0.2f,0.7f,0.25f,					//

		 		//x							//y					//z				//texture coords			//colour					//FACE 5
-(0.3f + outline)		,	-0.1f					 ,	0.1f			   , 	1.0f, 1.0f,				1.0f, 0.713f, 0.756f,			//centre
-(0.3f + outline)		,	 0.1f					 ,	0.1f			   , 	1.0f, 0.0f,				1.0f, 0.713f, 0.756f,			//
-(0.3f + outline)		,	 0.1f					 ,	-0.1f			   , 	0.0f, 0.0f,				1.0f, 0.713f, 0.756f,			//
-(0.3f + outline)		,	-0.1f					 ,	-0.1f			   , 	0.0f, 1.0f,				1.0f, 0.713f, 0.756f,			//
-(0.3f + outline)		,   -(0.3f + outline)		 , 0.1f			   , 	1.0f, 1.0f,					1.0f, 0.713f, 0.756f,			//left
-(0.3f + outline)		,   -(0.1f + outline)		 , 0.1f			   , 	1.0f, 0.0f,					1.0f, 0.713f, 0.756f,			//
-(0.3f + outline)		,   -(0.1f + outline)		 ,-0.1f			   , 	0.0f, 0.0f,					1.0f, 0.713f, 0.756f,			//
-(0.3f + outline)		,   -(0.3f + outline)		 ,-0.1f			   , 	0.0f, 1.0f,					1.0f, 0.713f, 0.756f,			//
-(0.3f + outline)		,	(0.1f + outline)		 , 0.1f			   , 	1.0f, 1.0f,					1.0f, 0.713f, 0.756f,			//right
-(0.3f + outline)		,	(0.3f + outline)		 , 0.1f			   , 	1.0f, 0.0f,					1.0f, 0.713f, 0.756f,			//
-(0.3f + outline)		,	(0.3f + outline)		 ,-0.1f			   , 	0.0f, 0.0f,					1.0f, 0.713f, 0.756f,			//
-(0.3f + outline)		,	(0.1f + outline)		 ,-0.1f			   , 	0.0f, 1.0f,					1.0f, 0.713f, 0.756f,			//
-(0.3f + outline)		,	-0.1f					 , -(0.1f + outline)  , 	1.0f, 1.0f,				1.0f, 0.713f, 0.756f,		//down
-(0.3f + outline)		,	 0.1f					 , -(0.1f + outline)  , 	1.0f, 0.0f,				1.0f, 0.713f, 0.756f,		//
-(0.3f + outline)		,	 0.1f					 , -(0.3f + outline)  , 	0.0f, 0.0f,				1.0f, 0.713f, 0.756f,		//
-(0.3f + outline)		,	-0.1f					 , -(0.3f + outline)  , 	0.0f, 1.0f,				1.0f, 0.713f, 0.756f,		//
-(0.3f + outline)		,	-0.1f					 , (0.3f + outline)   , 	1.0f, 1.0f,				1.0f, 0.713f, 0.756f,		//up
-(0.3f + outline)		,	 0.1f					 , (0.3f + outline)   , 	1.0f, 0.0f,				1.0f, 0.713f, 0.756f,		//
-(0.3f + outline)		,	 0.1f					 , (0.1f + outline)   , 	0.0f, 0.0f,				1.0f, 0.713f, 0.756f,		//
-(0.3f + outline)		,	-0.1f					 , (0.1f + outline)   , 	0.0f, 1.0f,				1.0f, 0.713f, 0.756f,		//
-(0.3f + outline)		,	-(0.3f + outline)		 , (0.3f + outline)   , 	1.0f, 1.0f,				1.0f, 0.713f, 0.756f,		//up left
-(0.3f + outline)		,	-(0.1f + outline)		 , (0.3f + outline)   , 	1.0f, 0.0f,				1.0f, 0.713f, 0.756f,		//
-(0.3f + outline)		,	-(0.1f + outline)		 , (0.1f + outline)   , 	0.0f, 0.0f,				1.0f, 0.713f, 0.756f,		//
-(0.3f + outline)		,	-(0.3f + outline)		 , (0.1f + outline)   , 	0.0f, 1.0f,				1.0f, 0.713f, 0.756f,		//
-(0.3f + outline)		,	(0.1f + outline)		 , (0.3f + outline)   , 	1.0f, 1.0f,				1.0f, 0.713f, 0.756f,		//up right
-(0.3f + outline)		,	(0.3f + outline)		 , (0.3f + outline)   , 	1.0f, 0.0f,				1.0f, 0.713f, 0.756f,		//
-(0.3f + outline)		,	(0.3f + outline)		 , (0.1f + outline)   , 	0.0f, 0.0f,				1.0f, 0.713f, 0.756f,		//
-(0.3f + outline)		,	(0.1f + outline)		 , (0.1f + outline)   , 	0.0f, 1.0f,				1.0f, 0.713f, 0.756f,		//
-(0.3f + outline)		,	-(0.3f + outline)		 , -(0.1f + outline)  , 	1.0f, 1.0f,				1.0f, 0.713f, 0.756f,		//down left
-(0.3f + outline)		,	-(0.1f + outline)		 , -(0.1f + outline)  , 	1.0f, 0.0f,				1.0f, 0.713f, 0.756f,		//
-(0.3f + outline)		,	-(0.1f + outline)		 , -(0.3f + outline)  , 	0.0f, 0.0f,				1.0f, 0.713f, 0.756f,		//
-(0.3f + outline)		,	-(0.3f + outline)		 , -(0.3f + outline)  , 	0.0f, 1.0f,				1.0f, 0.713f, 0.756f,		//
-(0.3f + outline)		,	(0.1f + outline)		 , -(0.1f + outline)  , 	1.0f, 1.0f,				1.0f, 0.713f, 0.756f,		//down right
-(0.3f + outline)		,	(0.3f + outline)		 , -(0.1f + outline)  , 	1.0f, 0.0f,				1.0f, 0.713f, 0.756f,		//
-(0.3f + outline)		,	(0.3f + outline)		 , -(0.3f + outline)  , 	0.0f, 0.0f,				1.0f, 0.713f, 0.756f,		//
-(0.3f + outline)		,	(0.1f + outline)		 , -(0.3f + outline)  , 	0.0f, 1.0f,				1.0f, 0.713f, 0.756f,		//


};

unsigned int indices[] = {
	//face 0
	0			, 1				,	2, 
	2			, 3				,	0,
	4			, 5				,	6,
	6			, 7				,	4,
	8			, 9				,	10,
	10			, 11			,	8,
	12			, 13			,	14,
	14			, 15			,	12,
	16			, 17			,	18,
	18			, 19			,	16,
	20			, 21			,	22,
	22			, 23			,	20,
	24			, 25			,	26,
	26			, 27			,	24,
	28			, 29			,	30,
	30			, 31			,	28,
	32			, 33			,	34,
	34			, 35			,	32,
	//face 1
	0	+ (i*1)		, 1		 + (i*1)	,	2	+ (i*1)			,
	2	+ (i*1)		, 3		+ (i*1)		,	0	+ (i*1)			,
	4	+ (i*1)		, 5		+ (i*1)		,	6	+ (i*1)			,
	6	+ (i*1)		, 7		+ (i*1)		,	4	+ (i*1)			,
	8	+ (i*1)		, 9		+ (i*1)		,	10	+ (i*1)			,
	10	+ (i*1)		, 11	+ (i*1)		,	8	+ (i*1)			,
	12	+ (i*1)		, 13	+ (i*1)		,	14	+ (i*1)			,
	14	+ (i*1)		, 15	+ (i*1)		,	12	+ (i*1)			,
	16	+ (i*1)		, 17	+ (i*1)		,	18	+ (i*1)			,
	18	+ (i*1)		, 19	+ (i*1)		,	16	+ (i*1)			,
	20	+ (i*1)		, 21	+ (i*1)		,	22	+ (i*1)			,
	22	+ (i*1)		, 23	+ (i*1)		,	20	+ (i*1)			,
	24	+ (i*1)		, 25	+ (i*1)		,	26	+ (i*1)			,
	26	+ (i*1)		, 27	+ (i*1)		,	24	+ (i*1)			,
	28	+ (i*1)		, 29	+ (i*1)		,	30	+ (i*1)			,
	30	+ (i*1)		, 31	+ (i*1)		,	28	+ (i*1)			,
	32	+ (i*1)		, 33	+ (i*1)		,	34	+ (i*1)			,
	34	+ (i*1)		, 35	+ (i*1)		,	32	+ (i*1)			,
	//face 2
	0 + (i * 2)		, 1 + (i * 2)	,	2 + (i * 2)				,
	2 + (i * 2)		, 3 + (i * 2)		,	0 + (i * 2)			,
	4 + (i * 2)		, 5 + (i * 2)		,	6 + (i * 2)			,
	6 + (i * 2)		, 7 + (i * 2)		,	4 + (i * 2)			,
	8 + (i * 2)		, 9 + (i * 2)		,	10 + (i * 2)		,
	10 + (i * 2)		, 11 + (i * 2)		,	8 + (i * 2)		,
	12 + (i * 2)		, 13 + (i * 2)		,	14 + (i * 2)	,
	14 + (i * 2)		, 15 + (i * 2)		,	12 + (i * 2)	,
	16 + (i * 2)		, 17 + (i * 2)		,	18 + (i * 2)	,
	18 + (i * 2)		, 19 + (i * 2)		,	16 + (i * 2)	,
	20 + (i * 2)		, 21 + (i * 2)		,	22 + (i * 2)	,
	22 + (i * 2)		, 23 + (i * 2)		,	20 + (i * 2)	,
	24 + (i * 2)		, 25 + (i * 2)		,	26 + (i * 2)	,
	26 + (i * 2)		, 27 + (i * 2)		,	24 + (i * 2)	,
	28 + (i * 2)		, 29 + (i * 2)		,	30 + (i * 2)	,
	30 + (i * 2)		, 31 + (i * 2)		,	28 + (i * 2)	,
	32 + (i * 2)		, 33 + (i * 2)		,	34 + (i * 2)	,
	34 + (i * 2)		, 35 + (i * 2)		,	32 + (i * 2)	,
	//face 3
0 + (i * 3)		, 1 + (i * 3)	,	2 + (i * 3)				,
2 + (i * 3)		, 3 + (i * 3)		,	0 + (i * 3)			,
4 + (i * 3)		, 5 + (i * 3)		,	6 + (i * 3)			,
6 + (i * 3)		, 7 + (i * 3)		,	4 + (i * 3)			,
8 + (i * 3)		, 9 + (i * 3)		,	10 + (i * 3)		,
10 + (i * 3)		, 11 + (i * 3)		,	8 + (i * 3)		,
12 + (i * 3)		, 13 + (i * 3)		,	14 + (i * 3)	,
14 + (i * 3)		, 15 + (i * 3)		,	12 + (i * 3)	,
16 + (i * 3)		, 17 + (i * 3)		,	18 + (i * 3)	,
18 + (i * 3)		, 19 + (i * 3)		,	16 + (i * 3)	,
20 + (i * 3)		, 21 + (i * 3)		,	22 + (i * 3)	,
22 + (i * 3)		, 23 + (i * 3)		,	20 + (i * 3)	,
24 + (i * 3)		, 25 + (i * 3)		,	26 + (i * 3)	,
26 + (i * 3)		, 27 + (i * 3)		,	24 + (i * 3)	,
28 + (i * 3)		, 29 + (i * 3)		,	30 + (i * 3)	,
30 + (i * 3)		, 31 + (i * 3)		,	28 + (i * 3)	,
32 + (i * 3)		, 33 + (i * 3)		,	34 + (i * 3)	,
34 + (i * 3)		, 35 + (i * 3)		,	32 + (i * 3)	,
//face 4
0 + (i * 4)		, 1 + (i * 4)	,	2 + (i * 4)				,
2 + (i * 4)		, 3 + (i * 4)		,	0 + (i * 4)			,
4 + (i * 4)		, 5 + (i * 4)		,	6 + (i * 4)			,
6 + (i * 4)		, 7 + (i * 4)		,	4 + (i * 4)			,
8 + (i * 4)		, 9 + (i * 4)		,	10 + (i * 4)		,
10 + (i * 4)		, 11 + (i * 4)		,	8 + (i * 4)		,
12 + (i * 4)		, 13 + (i * 4)		,	14 + (i * 4)	,
14 + (i * 4)		, 15 + (i * 4)		,	12 + (i * 4)	,
16 + (i * 4)		, 17 + (i * 4)		,	18 + (i * 4)	,
18 + (i * 4)		, 19 + (i * 4)		,	16 + (i * 4)	,
20 + (i * 4)		, 21 + (i * 4)		,	22 + (i * 4)	,
22 + (i * 4)		, 23 + (i * 4)		,	20 + (i * 4)	,
24 + (i * 4)		, 25 + (i * 4)		,	26 + (i * 4)	,
26 + (i * 4)		, 27 + (i * 4)		,	24 + (i * 4)	,
28 + (i * 4)		, 29 + (i * 4)		,	30 + (i * 4)	,
30 + (i * 4)		, 31 + (i * 4)		,	28 + (i * 4)	,
32 + (i * 4)		, 33 + (i * 4)		,	34 + (i * 4)	,
34 + (i * 4)		, 35 + (i * 4)		,	32 + (i * 4)	,
//face 5
0 + (i * 5)		, 1 + (i * 5)	,	2 + (i * 5)				,
2 + (i * 5)		, 3 + (i * 5)		,	0 + (i * 5)			,
4 + (i * 5)		, 5 + (i * 5)		,	6 + (i * 5)			,
6 + (i * 5)		, 7 + (i * 5)		,	4 + (i * 5)			,
8 + (i * 5)		, 9 + (i * 5)		,	10 + (i * 5)		,
10 + (i * 5)		, 11 + (i * 5)		,	8 + (i * 5)		,
12 + (i * 5)		, 13 + (i * 5)		,	14 + (i * 5)	,
14 + (i * 5)		, 15 + (i * 5)		,	12 + (i * 5)	,
16 + (i * 5)		, 17 + (i * 5)		,	18 + (i * 5)	,
18 + (i * 5)		, 19 + (i * 5)		,	16 + (i * 5)	,
20 + (i * 5)		, 21 + (i * 5)		,	22 + (i * 5)	,
22 + (i * 5)		, 23 + (i * 5)		,	20 + (i * 5)	,
24 + (i * 5)		, 25 + (i * 5)		,	26 + (i * 5)	,
26 + (i * 5)		, 27 + (i * 5)		,	24 + (i * 5)	,
28 + (i * 5)		, 29 + (i * 5)		,	30 + (i * 5)	,
30 + (i * 5)		, 31 + (i * 5)		,	28 + (i * 5)	,
32 + (i * 5)		, 33 + (i * 5)		,	34 + (i * 5)	,
34 + (i * 5)		, 35 + (i * 5)		,	32 + (i * 5)	,

};