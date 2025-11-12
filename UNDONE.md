# Undone Features

This document lists features that were planned or partially implemented but could not be fully completed within the scope of the current task.

## TLS (Transport Layer Security)
**Description:** Secure communication over the network using SSL/TLS protocols.
**Status:** Not implemented. This would involve integrating with a TLS library (e.g., OpenSSL) to encrypt server-client communication.

## Rate Limiting
**Description:** Mechanism to control the rate of requests a client can make to the server to prevent abuse and ensure fair usage.
**Status:** Not implemented. This would typically involve tracking client requests (e.g., by IP address) and rejecting requests that exceed a defined threshold within a given time window.

## Session Cookies
**Description:** Implementation of server-side sessions using HTTP cookies for maintaining user state across multiple requests.
**Status:** Not implemented. This would require generating session IDs, storing session data on the server, and managing session cookies in client browsers.

## Full PostgreSQL and MySQL Integrations
**Description:** Complete integration with PostgreSQL and MySQL databases, including connection management, query execution, and result parsing using their respective client libraries.
**Status:** Partially implemented (placeholders only). The `DbContext` abstraction has been extended to include `POSTGRES` and `MYSQL` types, and placeholder functions for creating contexts have been added. However, the actual connection logic and driver-specific query implementations are missing. This would require linking against `libpq` for PostgreSQL and `mysqlclient` for MySQL, and implementing the database-specific API calls.
