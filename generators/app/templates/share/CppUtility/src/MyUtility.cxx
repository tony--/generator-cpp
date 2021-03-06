////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///
///	Copyright (C) <%= year %> by <%= companyName %>
///
///	This file is part of the <%= projectName %> project.
///
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///	@file						<%= projectPath %>/MyUtility.cxx
///	@author						<%= authorName %> <<%= authorEmail %>>
///	@date						<%= date %>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <<%= projectPath %>/MyClass.hpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int								main										(			int							argc,
																						char**						argv								)
{

	using <%= projectPath.toLowerCase() %>::MyClass ;

	(void) argc ;
	(void) argv ;

	MyClass myClass = MyClass::Integer(123) ;

	myClass.doSomething() ;
	myClass.printSomething() ;

	return 0 ;

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////