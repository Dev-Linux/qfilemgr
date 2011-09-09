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

#ifndef _MIMEACTION_HPP
#define _MIMEACTION_HPP

#include <QString>

class MimeAction
{
public:
    MimeAction();
    MimeAction(const QString &fileName);
    MimeAction(const MimeAction &other);

    bool isValid() const;

    const QString desktopFile() const;
    const QString name() const;
    const QString comment() const;
    const QString exec() const;
    const QString mimeType() const;
    const QString icon() const;

private:
    bool m_valid;
    QString m_desktopFile;
    QString m_name;
    QString m_comment;
    QString m_exec;
    QString m_mimeType;
    QString m_icon;
};

#endif
