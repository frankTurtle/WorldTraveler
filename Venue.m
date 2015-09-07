//
//  Venue.m
//  World Traveler
//
//  Created by OSX on 9/7/15.
//  Copyright (c) 2015 LebonTech Solutions. All rights reserved.
//

#import "Venue.h"
#import "Contact.h"
#import "FSCategory.h"
#import "Location.h"
#import "Menu.h"


@implementation Venue

@dynamic name;
@dynamic id;
@dynamic contact;
@dynamic category;
@dynamic location;
@dynamic menu;

// OVERRIDDEN METHOD
// basically tells the API call where we want to start
+(NSString *)keyPathForResponseObject
{
    return @"response.venues";
}

@end
