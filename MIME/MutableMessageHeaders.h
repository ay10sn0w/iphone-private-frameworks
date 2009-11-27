/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import "MessageHeaders.h"

@class NSMutableArray, NSMutableDictionary;

@interface MutableMessageHeaders : MessageHeaders {
	NSMutableDictionary* _headersAdded;
	NSMutableArray* _headersRemoved;
}
// inherited: -(id)mutableCopy;
// inherited: -(void)dealloc;
// inherited: -(id)allHeaderKeys;
// inherited: -(BOOL)hasHeaderForKey:(id)key;
// inherited: -(id)_headerValueForKey:(id)key;
// inherited: -(id)firstHeaderForKey:(id)key;
-(void)removeHeaderForKey:(id)key;
-(void)setHeader:(id)header forKey:(id)key;
-(void)_appendHeaderKey:(id)key value:(id)value toData:(id)data;
-(void)_appendAddedHeaderKey:(id)key value:(id)value toData:(id)data;
// inherited: -(id)_copyHeaderValueForKey:(id)key;
// inherited: -(id)_copyHeaderValueForKey:(id)key offset:(unsigned*)offset decoded:(BOOL)decoded;
// inherited: -(id)encodedHeaders;
-(void)setAddressList:(id)list forKey:(id)key;
@end
