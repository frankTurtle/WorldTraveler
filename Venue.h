//
//  Venue.h
//  World Traveler
//
//  Created by OSX on 9/7/15.
//  Copyright (c) 2015 LebonTech Solutions. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "Record.h"

@class Contact, FSCategory, Location, Menu;

@interface Venue : Record

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * id;
@property (nonatomic, retain) Contact *contact;
@property (nonatomic, retain) FSCategory *category;
@property (nonatomic, retain) Location *location;
@property (nonatomic, retain) Menu *menu;

@end
