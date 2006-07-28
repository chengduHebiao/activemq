/**
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package org.apache.activeio.packet.async.vmpipe;

import java.io.IOException;
import java.net.URI;
import java.net.URISyntaxException;

import org.apache.activeio.Channel;
import org.apache.activeio.ChannelServer;
import org.apache.activeio.packet.async.vmpipe.VMPipeAsyncChannelFactory;
import org.apache.activeio.packet.sync.SyncChannelTestSupport;

/**
 * @version $Revision$
 */
public class VMPipeReflectionAsyncChannelTest extends SyncChannelTestSupport {

    VMPipeAsyncChannelFactory factory =  new VMPipeAsyncChannelFactory();

    protected Channel openChannel(URI connectURI) throws IOException {
        factory.setForceRefelection(true);
        return factory.openAsyncChannel(connectURI);
    }

    protected ChannelServer bindChannel() throws IOException, URISyntaxException {
        factory.setForceRefelection(true);
        return factory.bindAsyncChannel(new URI("vmpipe://testpipe"));
    }
    
}
