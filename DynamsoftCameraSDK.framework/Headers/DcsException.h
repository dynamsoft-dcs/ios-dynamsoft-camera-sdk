//
//  DcsBuffer.h
//  DCSTest
//
//  Created by dynamsoft on 02/05/2017.
//  Copyright © 2017 dynamsoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface DcsException : NSException

@end
/**
 *since6.0
 *The value of the parameter is out of range.
*/
@interface DcsValueOutOfRangeException : DcsException
-(instancetype) init: (NSString*) pName;
-(void) throwDcsException : (NSString*) pName;
@end

/**
 *since6.0
 *The value of the parameter is invalid.
*/
@interface DcsValueNotValidException : DcsException
-(instancetype) init: (NSString*) pName;
-(void) throwDcsException : (NSString*) pName;
@end
/**
 *since6.0
 *TThe document is not ready for editing.
*/
@interface DcsDocumentNotReadyException : DcsException
-(instancetype) init;
-(void) throwDcsException;
@end
/**
 *since6.0
 *The file cannot be found..
*/
@interface DcsFileNotFoundException : DcsException
-(instancetype) init:(NSString*)pFileName;
-(void) throwDcsException:(NSString*)pFileName;
@end
/**
 *since6.0
 *This operation is only supported under document mode.
*/
@interface DcsDocumentOnlyException : DcsException
-(instancetype) init;
-(void) throwDcsException;
@end
/**
 *since6.0
 *This operation is only supported under image  mode.
*/
@interface DcsImageOnlyException : DcsException
-(instancetype) init;
-(void) throwDcsException;
@end
/**
 *since6.0
 *Multiple selection can only be enabled in select mode.
 */
@interface DcsSelectModeNotEnabledException : DcsException
-(instancetype) init;
-(void) throwDcsException;
@end
/**
 *since6.0
 *No document is detected.
 */
@interface DcsDocumentNotDetectedException : DcsException
-(instancetype) init;
-(void) throwDcsException;
@end

@interface DcsLicenseException : DcsException
@end
/**
 *since6.0
 *The type  is invalid.
 */
@interface DcsTypeNotValidException : DcsException
-(instancetype) init: (NSString*) pName;
-(void) throwDcsException: (NSString*) pName;
@end

/**
 *since6.0
 *An error occurred while reading a file.
 */
@interface DcsFileReadException : DcsException
-(instancetype) init;
-(void) throwDcsException;
@end
/**
 *since6.0
 *The file path does not exist or you do not have permission to access it.
 */
@interface DcsFilePathInvalidException : DcsException
-(instancetype) init:(NSString*)pFileName;
-(void) throwDcsException:(NSString*)pFileName;
@end
/**
 *since6.0
 *There is not enough storage space available to complete this operation.
 */
@interface DcsNotEnoughSpaceException : DcsException
-(instancetype) init;
-(void) throwDcsException;
@end
/**
 *since6.0
 *The server returned the error code [HTTP_status_codes]
 */
@interface DcsHttpErrorException : DcsException
-(instancetype) init: (NSInteger) HTTP_status_codes;
-(void) throwDcsException: (NSInteger) HTTP_status_codes;
@end
/**
 *since6.0
 *You are trying to load an unsupported data. 
 */
@interface DcsDataFormatInvalidException : DcsException
-(instancetype) init;
-(void) throwDcsException;
@end
/**
 *since6.0
 *User cancelled the operation.
 */
@interface DcsOperationCancelledException : DcsException
-(instancetype) init;
-(void) throwDcsException;
@end
/**
 *since6.0
 *network unconnected.
 */
@interface DcsNetworkUnconnectedException : DcsException
-(instancetype) init;
-(void) throwDcsException;
@end
/**
 *since6.0
 *The camera not be authorized
 */
@interface DcsCameraNotAuthorizedException : DcsException
-(instancetype) init;
-(void) throwDcsException;
@end
/**
 *since6.0
 *The object does not exist.
 */
@interface DcsObjectNotExistException : DcsException
-(instancetype) init;
-(void) throwDcsException;
@end

/**
 *since6.0
 *Operation out of expected sequence.
 */
@interface DcsOperationSequenceException : DcsException
-(instancetype) init;
-(void) throwDcsException;
@end
/**
 *since6.0
 *The access to the cached license invalid.
 */
@interface DcsLicenseInvalidException : DcsLicenseException
-(instancetype) init;
-(void) throwDcsException;
@end
/**
 *since6.0
 *The access to the cached license expired.
 */
@interface DcsLicenseExpiredException : DcsLicenseException
-(instancetype) init;
-(void) throwDcsException;
@end
/**
 *since6.0
 *The camre not open
 */
@interface DcsCameraNotOpenException : DcsLicenseException
-(instancetype) init;
-(void) throwDcsException;
@end
/**
 *since6.0
 *The number of devices has exceeded the limit of the license.
 */
@interface DcsLicenseDevicesNumberExceededException : DcsLicenseException
-(instancetype) init;
-(void) throwDcsException;
@end
/**
 *since6.0
 *The license verification failed.
 */
@interface DcsLicenseVerificationFailedException : DcsLicenseException
-(instancetype) init;
-(void) throwDcsException;
@end
/**
 *since6.0
 *The delegate undefine
 */
@interface DcsDelegateUndefineException : DcsException
-(instancetype) init: (NSString*) pName;
-(void) throwDcsException: (NSString*) pName;
@end
/**
 *since6.0
 *The no exception
 */
@interface DcsNullException : DcsException
-(instancetype) init;
-(void) throwDcsException;
@end
