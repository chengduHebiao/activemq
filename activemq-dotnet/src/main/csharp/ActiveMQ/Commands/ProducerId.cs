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

//
//  NOTE!: This file is autogenerated - do not modify!
//         if you need to make a change, please see the Groovy scripts in the
//         activemq-core module
//

using System;
using System.Collections;

using ActiveMQ.OpenWire;
using ActiveMQ.Commands;

namespace ActiveMQ.Commands
{
	/// <summary>
    ///  The ActiveMQ ProducerId Command
	/// </summary>
    public class ProducerId : BaseDataStructure, DataStructure
    {
        public const byte ID_ProducerId = 123;
    			
        string connectionId;
        long value;
        long sessionId;

		public override int GetHashCode() {
            int answer = 0;
            answer = (answer * 37) + HashCode(ConnectionId);
            answer = (answer * 37) + HashCode(Value);
            answer = (answer * 37) + HashCode(SessionId);
            return answer;

		}
	

		public override bool Equals(object that) {
	    	if (that is ProducerId) {
	    	    return Equals((ProducerId) that);
			}
			return false;
    	}
    
		public virtual bool Equals(ProducerId that) {
            if (! Equals(this.ConnectionId, that.ConnectionId)) return false;
            if (! Equals(this.Value, that.Value)) return false;
            if (! Equals(this.SessionId, that.SessionId)) return false;
            return true;

		}
	

		public override string ToString() {
            return GetType().Name + "["
                + " ConnectionId=" + ConnectionId
                + " Value=" + Value
                + " SessionId=" + SessionId
                + " ]";

		}
	


        public override byte GetDataStructureType() {
            return ID_ProducerId;
        }


        // Properties

        public string ConnectionId
        {
            get { return connectionId; }
            set { this.connectionId = value; }            
        }

        public long Value
        {
            get { return value; }
            set { this.value = value; }            
        }

        public long SessionId
        {
            get { return sessionId; }
            set { this.sessionId = value; }            
        }

    }
}
