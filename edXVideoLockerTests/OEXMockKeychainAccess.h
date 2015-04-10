//
//  OEXMockKeychainAccess.h
//  edXVideoLocker
//
//  Created by Akiva Leffert on 4/10/15.
//  Copyright (c) 2015 edX. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "OEXKeychainAccess.h"

/// Pretend keychain that doesn't persist across runs
@interface OEXMockKeychainAccess : NSObject <OEXCredentialStorage>

@property (strong, nonatomic) OEXAccessToken* storedAccessToken;
@property (strong, nonatomic) OEXUserDetails* storedUserDetails;

@end