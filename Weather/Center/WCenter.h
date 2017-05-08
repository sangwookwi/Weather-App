//
//  WCenter.h
//  Weather
//
//  Created by Sangwook Wi on 5/3/17.
//  Copyright © 2017 Sangwook Wi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WModel.h"

@interface WCenter : NSObject

- (void)passDataFromProvider: (void (^)(WModel *dataModel))callback;


@end
