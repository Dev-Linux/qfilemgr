/*
 *  Copyright (C) 2011 O.S. Systems Softwares Ltda. All rights reserved.
 *  Authors:
 *    Luis Gustavo S. Barreto <gustavosbarreto@gmail.com>
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef _MIMECACHE_HPP
#define _MIMECACHE_HPP

#include <QString>

class QDataStream;

class MimeCache
{
public:
    MimeCache(const QString &fileName);

    QString aliasLookup(const QString &alias);
    QString unaliasMimeType(const QString &mimeType);

    QString getString(int offset, bool regExp = false);

    quint32 aliasListOffset();
    quint32 aliasListCount(int offset);

    quint32 parentListOffset();
    quint32 parentListCount(int offset);

    quint32 iconListOffset();
    quint32 iconListCount(int offset);

    QDataStream *stream;
};

#endif
