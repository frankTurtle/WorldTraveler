//
//  Record.m
//  World Traveler
//
//  Created by OSX on 9/7/15.
//  Copyright (c) 2015 LebonTech Solutions. All rights reserved.
//

#import "Record.h"

@implementation Record

// OVERRIDDEN METHOD
// basically tells the API call where we want to start
+(NSString *)keyPathForResponseObject
{
    return @"response";
}

@end
