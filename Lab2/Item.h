//
//  Item.h
//  iOS Programming Assignment 2
//
//  Created by Kevin Naughton Jr. on 10/14/2016.
//  Copyright © 2016 nyu.edu. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface Item : NSObject {
    
    //name attribute
    NSString *name;
    
    //description attribute
    NSString *description;
    
    //cost attribute
    float cost;
    
    //number of items
    int numberOfItems;
    
}

//getter for name
-(NSString *) getName;

//getter for description
-(NSString *) getDescription;

//getter for cost
-(float) getCost;

//getter for stock
-(int) getNumberOfItems;

//setter for name
-(void) setName: (NSString *) newName;

//setter for description
-(void) setDescription: (NSString *) newDescription;

//setter for cost
-(void) setCost: (float) newCost;

//setter for stock
-(void) setNumberOfItems: (int) newNumberOfItems;

//declare printObject function
-(void) printObject;



@end