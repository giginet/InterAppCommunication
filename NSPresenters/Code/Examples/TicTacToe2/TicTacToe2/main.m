//
// Tic Tac Toe
//
// Version History:
//  1.00  3rd July 2011 - Two player mode has fully working ok for a while. Single player finally have a "smart" enough computer player in this version. Published to blog.
//  2.00 12th July 2011 - migrated to Multi-View and split file version, add 3 difficulty levels
//  2.01 13th July 2011 - put in some memory leak fixes
//
//  Created by new2objectivec@gmail.com 
//  http:// new2objectivec.blogspot.com
//
//  Copyright 2011. All rights reserved.
//
//	This code is released under the "Take your kids, family or love ones for a few hours of outdoor activities license"
//	In order to use any code in your project you must take your kids, family or love ones for at least a few hours of
//	outdoor activities. And please give some sort of credit to the author of the code either
//	on your product's website, about box, or legal agreement.
//

// File Name   : main.m
// Description : Entry point of application, calls "TicTacToe2AppDelegate.m"

#import <UIKit/UIKit.h>

int main(int argc, char *argv[])
{
	NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];
	int retVal = UIApplicationMain(argc, argv, nil, @"TicTacToe2AppDelegate");
	[pool release];
	return retVal;
}