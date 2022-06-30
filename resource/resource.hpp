/* This file is part of mortar.
 *
 * mortar is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * mortar is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with mortar.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MORTAR_RESOURCE_H
#define MORTAR_RESOURCE_H

namespace Mortar::Resource {
  typedef const char * ResourceHandle;

  class Resource {
    public:
      Resource(ResourceHandle handle)
        : handle { handle } {};

      virtual ~Resource() {}

      ResourceHandle getHandle() const;

    private:
      ResourceHandle handle;
  };
}

#endif
