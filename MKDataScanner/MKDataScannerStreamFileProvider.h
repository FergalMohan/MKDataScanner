//
//  MKDataScannerFileProvider.h
//  MKDataScanner
//
//  Created by Marcin Krzyzanowski on 09/01/15.
//  Copyright (c) 2015 Marcin Krzyżanowski. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MKDataProvider.h"

@interface MKDataScannerStreamFileProvider : NSObject <MKDataProvider>
- (instancetype) initWithFileURL:(NSURL *)fileURL;

@end
