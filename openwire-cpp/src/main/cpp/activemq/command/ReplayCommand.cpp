/*
* Licensed to the Apache Software Foundation (ASF) under one or more
* contributor license agreements.  See the NOTICE file distributed with
* this work for additional information regarding copyright ownership.
* The ASF licenses this file to You under the Apache License, Version 2.0
* (the "License"); you may not use this file except in compliance with
* the License.  You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
#include "activemq/command/ReplayCommand.hpp"

using namespace apache::activemq::command;

/*
 *
 *  Command and marshalling code for OpenWire format for ReplayCommand
 *
 *
 *  NOTE!: This file is autogenerated - do not modify!
 *         if you need to make a change, please see the Groovy scripts in the
 *         activemq-core module
 *
 */
ReplayCommand::ReplayCommand()
{
    this->firstNakNumber = 0 ;
    this->lastNakNumber = 0 ;
}

ReplayCommand::~ReplayCommand()
{
}

unsigned char ReplayCommand::getDataStructureType()
{
    return ReplayCommand::TYPE ; 
}

        
int ReplayCommand::getFirstNakNumber()
{
    return firstNakNumber ;
}

void ReplayCommand::setFirstNakNumber(int firstNakNumber)
{
    this->firstNakNumber = firstNakNumber ;
}

        
int ReplayCommand::getLastNakNumber()
{
    return lastNakNumber ;
}

void ReplayCommand::setLastNakNumber(int lastNakNumber)
{
    this->lastNakNumber = lastNakNumber ;
}

int ReplayCommand::marshal(p<IMarshaller> marshaller, int mode, p<IOutputStream> ostream) throw (IOException)
{
    int size = 0 ;

    size += BaseCommand::marshal(marshaller, mode, ostream) ; 
    size += marshaller->marshalInt(firstNakNumber, mode, ostream) ; 
    size += marshaller->marshalInt(lastNakNumber, mode, ostream) ; 
    return size ;
}

void ReplayCommand::unmarshal(p<IMarshaller> marshaller, int mode, p<IInputStream> istream) throw (IOException)
{
    BaseCommand::unmarshal(marshaller, mode, istream) ; 
    firstNakNumber = (marshaller->unmarshalInt(mode, istream)) ; 
    lastNakNumber = (marshaller->unmarshalInt(mode, istream)) ; 
}
